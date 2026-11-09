# pstack-m6-forge-lab

Disposable acceptance lab for **pstack M6 — Git 分档交付**.

No business code, no owner data. Exists only so the M6 delivery pipeline
(capability probe -> verdict/patch-id -> owner grant -> publication intent ->
single git publisher -> forge reconciliation -> post-land verification) can be
exercised against a **real** GitHub forge with real branch protection, real
required status checks and real merges.

Managed by `pstack-m6` on the isolated M5 host. Safe to delete.
