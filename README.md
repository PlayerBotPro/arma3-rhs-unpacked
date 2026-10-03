# RHS (Unpacked) – Arma 3 Mod Contents

This repository holds the **unpacked contents of the Red Hammer Studios (RHS) mod suite for Arma 3**. The `.pbo` archives were extracted into plain folders, and the binarized configs (`config.bin`) were de-rapified so they can be read and diffed in git.

It is intended for study, reference and tracking changes. It is **not** a playable mod as-is. To play, subscribe to the official RHS mods on Steam Workshop.

> [!NOTE]
> Binary asset files such as `.p3d` (models), `.paa` (textures), `.wss`/`.ogg` (sounds), `.lip` and similar are **0-byte placeholders**. They keep the original folder and file structure, but contain no real data. Only text-based files (configs, scripts, etc.) have real content.

## Contents

| Folder | Mod | Approx. size |
|---|---|---|
| `RHSAFRF/` | Armed Forces of the Russian Federation | ~24 MB, ~24k files |
| `RHSUSAF/` | United States Armed Forces | ~49 MB, ~15k files |
| `RHSGREF/` | Global Resource Enhancement Forces | ~22 MB, ~9k files |
| `RHSSAF/` | Serbian Armed Forces | ~2 MB, ~2k files |

Each mod folder contains one subfolder per original PBO (e.g. `rhsusf_ah64`, `rhs_2s1`, `rhssaf_c_troops`). These hold configs (`.cpp`/`.hpp`), scripts (`.sqf`), models (`.p3d`), textures (`.paa`), materials (`.rvmat`), sounds (`.wss`/`.ogg`) and lip-sync files (`.lip`).

## Usage

- Browse configs and scripts to see how RHS defines vehicles, weapons and factions.
- Use git history to compare versions between RHS releases.
- Do not load these folders directly in Arma 3. Use the official mod.

## Credits and license

All content belongs to **Red Hammer Studios** and its contributors. See the official RHS site and the license terms shipped with the mod. Most RHS content is released under the Arma Public License Share Alike (APL-SA), but check the official terms for exceptions. This repository is unofficial and not affiliated with RHS or Bohemia Interactive.

Antigravity Sonnet 5.5 Medium
