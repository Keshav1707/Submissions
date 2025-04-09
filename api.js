async function sleep(ms) {
  return new Promise((resolve) => setTimeout(resolve, ms));
}

const visited = new Set(); // Track visited prefixes

async function fun(s) {
  if (s.length === 4 || visited.has(s)) return; // Stop if 4-char limit reached or already checked

  visited.add(s); // Mark this prefix as visited

  try {
    let response = await fetch(
      `http://35.200.185.69:8000/v1/autocomplete?query=${s}`
    );
    let data = await response.json();

    console.log(`Response for ${s}:`, data);

    if (!data.results || data.results.length === 0) {
      console.log(`No words found for ${s}, skipping to next prefix.`);
      return;
    }

    await sleep(600); // **Ensure delay before making the next request**

    // If count < 10, do not extend the prefix further; just move lexicographically
    if (data.count < 10) {
      console.log(`Skipping further expansion for ${s} as count < 10.`);
    } else {
      let lastWord = data.results[data.results.length - 1];
      let nextPrefix = lastWord.substring(0, s.length + 1);
      if (!visited.has(nextPrefix)) {
        await fun(nextPrefix);
      }
    }

    // Move to the next lexicographic prefix
    let lastChar = s[s.length - 1];
    for (let c = lastChar.charCodeAt(0) + 1; c <= 122; c++) {
      let newPrefix = s.slice(0, -1) + String.fromCharCode(c);
      if (!visited.has(newPrefix)) {
        console.log(`Trying next prefix: ${newPrefix}`);
        await sleep(600); // **Delay before checking the next prefix**
        await fun(newPrefix);
      }
    }
  } catch (error) {
    console.error(`Error fetching data for ${s}:`, error);
  }
}

async function solve() {
  let s = "a";
  await fun(s);
}

// Run the function
solve();
