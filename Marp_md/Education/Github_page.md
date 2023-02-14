---
marp: true
theme: uncover
class: invert
paginate: true
header: Marp tutorial
footer: 2023-02-10
---

Github page

---

<!-- 출처: https://nicolas-van.github.io/easy-markdown-to-github-pages/ -->

* root에 ```_config.yml``` 파일만들기
```yml
plugins:
  - jekyll-relative-links
relative_links:
  enabled: true
  collections: true
include:
  - CONTRIBUTING.md
  - README.md
  - LICENSE.md
  - COPYING.md
  - CODE_OF_CONDUCT.md
  - CONTRIBUTING.md
  - ISSUE_TEMPLATE.md
  - PULL_REQUEST_TEMPLATE.md
  - Marp_md/Education/
  ```