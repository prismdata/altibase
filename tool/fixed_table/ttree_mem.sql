CREATE OR REPLACE VIEW ADM_TTREE_MEM AS
SELECT TO_CHAR(PAGE_COUNT * 32) || ' KB' AS TTREE_MEM
FROM SYSTEM_.SYSX_TTREE_INDEX_MEMORY_;
