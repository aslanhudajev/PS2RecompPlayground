#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _updateRefImage
// Address: 0x124c70 - 0x12504c
void _updateRefImage_0x124c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124c70u;

    // 0x124c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x124c74: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124c78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124c7c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124c80: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x124c80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x124c84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x124c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x124c88: 0x8e4a19ac  lw          $t2, 0x19AC($s2)
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
    // 0x124c8c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x124c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x124c90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x124c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124c94: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x124c94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124c9c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x124c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124ca0: 0x8c4317bc  lw          $v1, 0x17BC($v0)
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x124ca4: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x124ca4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ca8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x124ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x124cac: 0x39420003  xori        $v0, $t2, 0x3
    ctx->pc = 0x124cacu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)3u)));
    // 0x124cb0: 0x8e6d197c  lw          $t5, 0x197C($s3)
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6524)));
    // 0x124cb4: 0x222580a  movz        $t3, $s1, $v0
    ctx->pc = 0x124cb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 17));
    // 0x124cb8: 0x8c690040  lw          $t1, 0x40($v1)
    ctx->pc = 0x124cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x124cbc: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x124cbcu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cc0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x124cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124cc4: 0x15b0005b  bne         $t5, $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x124CC4u;
    {
        const bool branch_taken_0x124cc4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 16));
        ctx->pc = 0x124CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CC4u;
            // 0x124cc8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cc4) {
            ctx->pc = 0x124E34u;
            goto label_124e34;
        }
    }
    ctx->pc = 0x124CCCu;
    // 0x124ccc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124cd0: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x124cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x124cd4: 0x8c871808  lw          $a3, 0x1808($a0)
    ctx->pc = 0x124cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6152)));
    // 0x124cd8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x124cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x124cdc: 0x8d2200a0  lw          $v0, 0xA0($t1)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x124ce0: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x124ce4: 0x8d2300a4  lw          $v1, 0xA4($t1)
    ctx->pc = 0x124ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 164)));
    // 0x124ce8: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x124ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x124cec: 0x8d041820  lw          $a0, 0x1820($t0)
    ctx->pc = 0x124cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6176)));
    // 0x124cf0: 0x8cc51814  lw          $a1, 0x1814($a2)
    ctx->pc = 0x124cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6164)));
    // 0x124cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124cf8: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x124cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x124cfc: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x124cfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x124d00: 0xae871a44  sw          $a3, 0x1A44($s4)
    ctx->pc = 0x124d00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6724), GPR_U32(ctx, 7));
    // 0x124d04: 0xad851a48  sw          $a1, 0x1A48($t4)
    ctx->pc = 0x124d04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6728), GPR_U32(ctx, 5));
    // 0x124d08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124D08u;
    {
        const bool branch_taken_0x124d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D08u;
            // 0x124d0c: 0xad041a4c  sw          $a0, 0x1A4C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 6732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d08) {
            ctx->pc = 0x124D28u;
            goto label_124d28;
        }
    }
    ctx->pc = 0x124D10u;
    // 0x124d10: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x124d10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x124d14: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x124d18: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124d1c: 0xace01a34  sw          $zero, 0x1A34($a3)
    ctx->pc = 0x124d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6708), GPR_U32(ctx, 0));
    // 0x124d20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124D20u;
    {
        const bool branch_taken_0x124d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D20u;
            // 0x124d24: 0xac401a30  sw          $zero, 0x1A30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d20) {
            ctx->pc = 0x124D2Cu;
            goto label_124d2c;
        }
    }
    ctx->pc = 0x124D28u;
label_124d28:
    // 0x124d28: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x124d28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
label_124d2c:
    // 0x124d2c: 0x8d2200e8  lw          $v0, 0xE8($t1)
    ctx->pc = 0x124d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x124d30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D30u;
    {
        const bool branch_taken_0x124d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D30u;
            // 0x124d34: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d30) {
            ctx->pc = 0x124D44u;
            goto label_124d44;
        }
    }
    ctx->pc = 0x124D38u;
    // 0x124d38: 0x8ce21a34  lw          $v0, 0x1A34($a3)
    ctx->pc = 0x124d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 6708)));
    // 0x124d3c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x124D3Cu;
    {
        const bool branch_taken_0x124d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D3Cu;
            // 0x124d40: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d3c) {
            ctx->pc = 0x124D74u;
            goto label_124d74;
        }
    }
    ctx->pc = 0x124D44u;
label_124d44:
    // 0x124d44: 0x8c431a30  lw          $v1, 0x1A30($v0)
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x124d48: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x124D48u;
    {
        const bool branch_taken_0x124d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124d48) {
            ctx->pc = 0x124D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124D48u;
            // 0x124d4c: 0xad2000e8  sw          $zero, 0xE8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124D78u;
            goto label_124d78;
        }
    }
    ctx->pc = 0x124D50u;
    // 0x124d50: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124d54: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x124d58: 0x8c441800  lw          $a0, 0x1800($v0)
    ctx->pc = 0x124d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6144)));
    // 0x124d5c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x124d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x124d60: 0x8c66180c  lw          $a2, 0x180C($v1)
    ctx->pc = 0x124d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6156)));
    // 0x124d64: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x124d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x124d68: 0x8ca21818  lw          $v0, 0x1818($a1)
    ctx->pc = 0x124d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6168)));
    // 0x124d6c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x124d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x124d70: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x124d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_124d74:
    // 0x124d74: 0xad2000e8  sw          $zero, 0xE8($t1)
    ctx->pc = 0x124d74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
label_124d78:
    // 0x124d78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124d7c: 0x8e4219ac  lw          $v0, 0x19AC($s2)
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
    // 0x124d80: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x124D80u;
    {
        const bool branch_taken_0x124d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x124D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D80u;
            // 0x124d84: 0xace01a34  sw          $zero, 0x1A34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d80) {
            ctx->pc = 0x124DC8u;
            goto label_124dc8;
        }
    }
    ctx->pc = 0x124D88u;
    // 0x124d88: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124d8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d90: 0x8c431800  lw          $v1, 0x1800($v0)
    ctx->pc = 0x124d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6144)));
    // 0x124d94: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x124d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124d98: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x124D98u;
    {
        const bool branch_taken_0x124d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x124D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D98u;
            // 0x124d9c: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d98) {
            ctx->pc = 0x124DACu;
            goto label_124dac;
        }
    }
    ctx->pc = 0x124DA0u;
    // 0x124da0: 0x8c431a30  lw          $v1, 0x1A30($v0)
    ctx->pc = 0x124da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x124da4: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x124DA4u;
    {
        const bool branch_taken_0x124da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DA4u;
            // 0x124da8: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124da4) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124DACu;
label_124dac:
    // 0x124dac: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124db0: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x124db0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124db4: 0x8c831804  lw          $v1, 0x1804($a0)
    ctx->pc = 0x124db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6148)));
    // 0x124db8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x124db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124dbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x124dbcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x124dc0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x124DC0u;
    {
        const bool branch_taken_0x124dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DC0u;
            // 0x124dc4: 0x2c80b  movn        $t9, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dc0) {
            ctx->pc = 0x124F30u;
            goto label_124f30;
        }
    }
    ctx->pc = 0x124DC8u;
label_124dc8:
    // 0x124dc8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124dcc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124dd0: 0x8c43180c  lw          $v1, 0x180C($v0)
    ctx->pc = 0x124dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6156)));
    // 0x124dd4: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x124dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124dd8: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124DD8u;
    {
        const bool branch_taken_0x124dd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x124DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DD8u;
            // 0x124ddc: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dd8) {
            ctx->pc = 0x124DF4u;
            goto label_124df4;
        }
    }
    ctx->pc = 0x124DE0u;
    // 0x124de0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124de4: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x124de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x124de8: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x124de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124dec: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x124DECu;
    {
        const bool branch_taken_0x124dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x124DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DECu;
            // 0x124df0: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dec) {
            ctx->pc = 0x124E00u;
            goto label_124e00;
        }
    }
    ctx->pc = 0x124DF4u;
label_124df4:
    // 0x124df4: 0x8c431a30  lw          $v1, 0x1A30($v0)
    ctx->pc = 0x124df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6704)));
    // 0x124df8: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x124DF8u;
    {
        const bool branch_taken_0x124df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DF8u;
            // 0x124dfc: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124df8) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124E00u;
label_124e00:
    // 0x124e00: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e08: 0x8c431810  lw          $v1, 0x1810($v0)
    ctx->pc = 0x124e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x124e0c: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x124e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124e10: 0x14a40048  bne         $a1, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x124E10u;
    {
        const bool branch_taken_0x124e10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x124E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E10u;
            // 0x124e14: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e10) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124E18u;
    // 0x124e18: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124e1c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x124e1cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e20: 0x8c44181c  lw          $a0, 0x181C($v0)
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
    // 0x124e24: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x124e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x124e28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x124e28u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x124e2c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x124E2Cu;
    {
        const bool branch_taken_0x124e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E2Cu;
            // 0x124e30: 0x3c80b  movn        $t9, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e2c) {
            ctx->pc = 0x124F30u;
            goto label_124f30;
        }
    }
    ctx->pc = 0x124E34u;
label_124e34:
    // 0x124e34: 0x15c00013  bnez        $t6, . + 4 + (0x13 << 2)
    ctx->pc = 0x124E34u;
    {
        const bool branch_taken_0x124e34 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x124E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E34u;
            // 0x124e38: 0x3c0c0017  lui         $t4, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e34) {
            ctx->pc = 0x124E84u;
            goto label_124e84;
        }
    }
    ctx->pc = 0x124E3Cu;
    // 0x124e3c: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x124e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x124e40: 0x8cc81800  lw          $t0, 0x1800($a2)
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 6144)));
    // 0x124e44: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x124e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x124e48: 0x8d871804  lw          $a3, 0x1804($t4)
    ctx->pc = 0x124e48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6148)));
    // 0x124e4c: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x124e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x124e50: 0xad881804  sw          $t0, 0x1804($t4)
    ctx->pc = 0x124e50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6148), GPR_U32(ctx, 8));
    // 0x124e54: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124e58: 0x8ca8180c  lw          $t0, 0x180C($a1)
    ctx->pc = 0x124e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6156)));
    // 0x124e5c: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x124e60: 0x8d631810  lw          $v1, 0x1810($t3)
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 6160)));
    // 0x124e64: 0xad681810  sw          $t0, 0x1810($t3)
    ctx->pc = 0x124e64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 6160), GPR_U32(ctx, 8));
    // 0x124e68: 0x8c881818  lw          $t0, 0x1818($a0)
    ctx->pc = 0x124e68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6168)));
    // 0x124e6c: 0x8d22181c  lw          $v0, 0x181C($t1)
    ctx->pc = 0x124e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6172)));
    // 0x124e70: 0xacc71800  sw          $a3, 0x1800($a2)
    ctx->pc = 0x124e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6144), GPR_U32(ctx, 7));
    // 0x124e74: 0xaca3180c  sw          $v1, 0x180C($a1)
    ctx->pc = 0x124e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6156), GPR_U32(ctx, 3));
    // 0x124e78: 0xac821818  sw          $v0, 0x1818($a0)
    ctx->pc = 0x124e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6168), GPR_U32(ctx, 2));
    // 0x124e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124E7Cu;
    {
        const bool branch_taken_0x124e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E7Cu;
            // 0x124e80: 0xad28181c  sw          $t0, 0x181C($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 6172), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e7c) {
            ctx->pc = 0x124E8Cu;
            goto label_124e8c;
        }
    }
    ctx->pc = 0x124E84u;
label_124e84:
    // 0x124e84: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x124e88: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
label_124e8c:
    // 0x124e8c: 0x8d821804  lw          $v0, 0x1804($t4)
    ctx->pc = 0x124e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6148)));
    // 0x124e90: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x124e94: 0x8d651810  lw          $a1, 0x1810($t3)
    ctx->pc = 0x124e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 6160)));
    // 0x124e98: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x124e98u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x124e9c: 0x8d24181c  lw          $a0, 0x181C($t1)
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6172)));
    // 0x124ea0: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x124ea4: 0xae821a44  sw          $v0, 0x1A44($s4)
    ctx->pc = 0x124ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6724), GPR_U32(ctx, 2));
    // 0x124ea8: 0xad851a48  sw          $a1, 0x1A48($t4)
    ctx->pc = 0x124ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6728), GPR_U32(ctx, 5));
    // 0x124eac: 0x15f0000b  bne         $t7, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x124EACu;
    {
        const bool branch_taken_0x124eac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x124EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EACu;
            // 0x124eb0: 0xad041a4c  sw          $a0, 0x1A4C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 6732), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124eac) {
            ctx->pc = 0x124EDCu;
            goto label_124edc;
        }
    }
    ctx->pc = 0x124EB4u;
    // 0x124eb4: 0x55b1001e  bnel        $t5, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x124EB4u;
    {
        const bool branch_taken_0x124eb4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 17));
        if (branch_taken_0x124eb4) {
            ctx->pc = 0x124EB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124EB4u;
            // 0x124eb8: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F30u;
            goto label_124f30;
        }
    }
    ctx->pc = 0x124EBCu;
    // 0x124ebc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ec4: 0x8c821800  lw          $v0, 0x1800($a0)
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6144)));
    // 0x124ec8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x124ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x124ecc: 0x14650019  bne         $v1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x124ECCu;
    {
        const bool branch_taken_0x124ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x124ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124ECCu;
            // 0x124ed0: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ecc) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124ED4u;
    // 0x124ed4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x124ED4u;
    {
        const bool branch_taken_0x124ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124ED4u;
            // 0x124ed8: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ed4) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124EDCu;
label_124edc:
    // 0x124edc: 0x39420001  xori        $v0, $t2, 0x1
    ctx->pc = 0x124edcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x124ee0: 0x8e63197c  lw          $v1, 0x197C($s3)
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6524)));
    // 0x124ee4: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x124ee4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x124ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124eec: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x124EECu;
    {
        const bool branch_taken_0x124eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x124EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EECu;
            // 0x124ef0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124eec) {
            ctx->pc = 0x124F2Cu;
            goto label_124f2c;
        }
    }
    ctx->pc = 0x124EF4u;
    // 0x124ef4: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x124EF4u;
    {
        const bool branch_taken_0x124ef4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EF4u;
            // 0x124ef8: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ef4) {
            ctx->pc = 0x124F08u;
            goto label_124f08;
        }
    }
    ctx->pc = 0x124EFCu;
    // 0x124efc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x124efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x124f00: 0x1046000a  beq         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x124F00u;
    {
        const bool branch_taken_0x124f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F00u;
            // 0x124f04: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f00) {
            ctx->pc = 0x124F2Cu;
            goto label_124f2c;
        }
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0x8c43180c  lw          $v1, 0x180C($v0)
    ctx->pc = 0x124f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6156)));
    // 0x124f0c: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x124f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124f10: 0x14a60008  bne         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x124F10u;
    {
        const bool branch_taken_0x124f10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x124F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F10u;
            // 0x124f14: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f10) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124F18u;
    // 0x124f18: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x124f1c: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x124f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x124f20: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x124f24: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x124F24u;
    {
        const bool branch_taken_0x124f24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x124F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F24u;
            // 0x124f28: 0x8e4319ac  lw          $v1, 0x19AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f24) {
            ctx->pc = 0x124F34u;
            goto label_124f34;
        }
    }
    ctx->pc = 0x124F2Cu;
label_124f2c:
    // 0x124f2c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_124f30:
    // 0x124f30: 0x8e4319ac  lw          $v1, 0x19AC($s2)
    ctx->pc = 0x124f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
label_124f34:
    // 0x124f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x124f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124f38: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x124F38u;
    {
        const bool branch_taken_0x124f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F38u;
            // 0x124f3c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f38) {
            ctx->pc = 0x124F74u;
            goto label_124f74;
        }
    }
    ctx->pc = 0x124F40u;
    // 0x124f40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124F40u;
    {
        const bool branch_taken_0x124f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F40u;
            // 0x124f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f40) {
            ctx->pc = 0x124F58u;
            goto label_124f58;
        }
    }
    ctx->pc = 0x124F48u;
    // 0x124f48: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124F48u;
    {
        const bool branch_taken_0x124f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x124F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F48u;
            // 0x124f4c: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f48) {
            ctx->pc = 0x124F6Cu;
            goto label_124f6c;
        }
    }
    ctx->pc = 0x124F50u;
    // 0x124f50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x124F50u;
    {
        const bool branch_taken_0x124f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F50u;
            // 0x124f54: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f50) {
            ctx->pc = 0x124F80u;
            goto label_124f80;
        }
    }
    ctx->pc = 0x124F58u;
label_124f58:
    // 0x124f58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x124f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124f5c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124F5Cu;
    {
        const bool branch_taken_0x124f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x124f5c) {
            ctx->pc = 0x124F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124F5Cu;
            // 0x124f60: 0x8e981a44  lw          $t8, 0x1A44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 6724)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124F78u;
            goto label_124f78;
        }
    }
    ctx->pc = 0x124F64u;
    // 0x124f64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124F64u;
    {
        const bool branch_taken_0x124f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F64u;
            // 0x124f68: 0x3c030017  lui         $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f64) {
            ctx->pc = 0x124F7Cu;
            goto label_124f7c;
        }
    }
    ctx->pc = 0x124F6Cu;
label_124f6c:
    // 0x124f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124F6Cu;
    {
        const bool branch_taken_0x124f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F6Cu;
            // 0x124f70: 0x8d981a48  lw          $t8, 0x1A48($t4) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f6c) {
            ctx->pc = 0x124F78u;
            goto label_124f78;
        }
    }
    ctx->pc = 0x124F74u;
label_124f74:
    // 0x124f74: 0x8d181a4c  lw          $t8, 0x1A4C($t0)
    ctx->pc = 0x124f74u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6732)));
label_124f78:
    // 0x124f78: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x124f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
label_124f7c:
    // 0x124f7c: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x124f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
label_124f80:
    // 0x124f80: 0x8c6a19c8  lw          $t2, 0x19C8($v1)
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6600)));
    // 0x124f84: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124f88: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x124f8c: 0x8e6c197c  lw          $t4, 0x197C($s3)
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6524)));
    // 0x124f90: 0x8ca319c0  lw          $v1, 0x19C0($a1)
    ctx->pc = 0x124f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6592)));
    // 0x124f94: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x124f98: 0x8e4d19ac  lw          $t5, 0x19AC($s2)
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6572)));
    // 0x124f9c: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x124fa0: 0x8c4b1948  lw          $t3, 0x1948($v0)
    ctx->pc = 0x124fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6472)));
    // 0x124fa4: 0x3c090017  lui         $t1, 0x17
    ctx->pc = 0x124fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)23 << 16));
    // 0x124fa8: 0x8c8819b0  lw          $t0, 0x19B0($a0)
    ctx->pc = 0x124fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6576)));
    // 0x124fac: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x124facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x124fb0: 0xdcce2088  ld          $t6, 0x2088($a2)
    ctx->pc = 0x124fb0u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 8328)));
    // 0x124fb4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x124fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x124fb8: 0xdcef2090  ld          $t7, 0x2090($a3)
    ctx->pc = 0x124fb8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 7), 8336)));
    // 0x124fbc: 0x253019e8  addiu       $s0, $t1, 0x19E8
    ctx->pc = 0x124fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 6632));
    // 0x124fc0: 0xaf0c002c  sw          $t4, 0x2C($t8)
    ctx->pc = 0x124fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 12));
    // 0x124fc4: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x124fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x124fc8: 0xaf0d0030  sw          $t5, 0x30($t8)
    ctx->pc = 0x124fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 13));
    // 0x124fcc: 0x263219f8  addiu       $s2, $s1, 0x19F8
    ctx->pc = 0x124fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 6648));
    // 0x124fd0: 0xaf0b0034  sw          $t3, 0x34($t8)
    ctx->pc = 0x124fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 11));
    // 0x124fd4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x124fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fd8: 0xaf0a0038  sw          $t2, 0x38($t8)
    ctx->pc = 0x124fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 10));
    // 0x124fdc: 0xaf08003c  sw          $t0, 0x3C($t8)
    ctx->pc = 0x124fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 8));
    // 0x124fe0: 0xaf030040  sw          $v1, 0x40($t8)
    ctx->pc = 0x124fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 3));
    // 0x124fe4: 0xaf000028  sw          $zero, 0x28($t8)
    ctx->pc = 0x124fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 0));
    // 0x124fe8: 0x8c871970  lw          $a3, 0x1970($a0)
    ctx->pc = 0x124fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6512)));
    // 0x124fec: 0x8d2319e8  lw          $v1, 0x19E8($t1)
    ctx->pc = 0x124fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 6632)));
    // 0x124ff0: 0x8ca61974  lw          $a2, 0x1974($a1)
    ctx->pc = 0x124ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6516)));
    // 0x124ff4: 0xaf030044  sw          $v1, 0x44($t8)
    ctx->pc = 0x124ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 3));
    // 0x124ff8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x124ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124ffc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x125000: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x125000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125004: 0xaf040048  sw          $a0, 0x48($t8)
    ctx->pc = 0x125004u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 4));
    // 0x125008: 0xff0e0018  sd          $t6, 0x18($t8)
    ctx->pc = 0x125008u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 14));
    // 0x12500c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x125010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125014: 0xaf03004c  sw          $v1, 0x4C($t8)
    ctx->pc = 0x125014u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
    // 0x125018: 0xff0f0020  sd          $t7, 0x20($t8)
    ctx->pc = 0x125018u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 15));
    // 0x12501c: 0x8e2419f8  lw          $a0, 0x19F8($s1)
    ctx->pc = 0x12501cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6648)));
    // 0x125020: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125024: 0xaf040050  sw          $a0, 0x50($t8)
    ctx->pc = 0x125024u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 80), GPR_U32(ctx, 4));
    // 0x125028: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12502c: 0xaf030054  sw          $v1, 0x54($t8)
    ctx->pc = 0x12502cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 84), GPR_U32(ctx, 3));
    // 0x125030: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x125030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x125034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125038: 0xaf060060  sw          $a2, 0x60($t8)
    ctx->pc = 0x125038u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 6));
    // 0x12503c: 0xaf040058  sw          $a0, 0x58($t8)
    ctx->pc = 0x12503cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 88), GPR_U32(ctx, 4));
    // 0x125040: 0xaf07005c  sw          $a3, 0x5C($t8)
    ctx->pc = 0x125040u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 92), GPR_U32(ctx, 7));
    // 0x125044: 0x3e00008  jr          $ra
    ctx->pc = 0x125044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125044u;
            // 0x125048: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124D28u: goto label_124d28;
            case 0x124D2Cu: goto label_124d2c;
            case 0x124D44u: goto label_124d44;
            case 0x124D74u: goto label_124d74;
            case 0x124D78u: goto label_124d78;
            case 0x124DACu: goto label_124dac;
            case 0x124DC8u: goto label_124dc8;
            case 0x124DF4u: goto label_124df4;
            case 0x124E00u: goto label_124e00;
            case 0x124E34u: goto label_124e34;
            case 0x124E84u: goto label_124e84;
            case 0x124E8Cu: goto label_124e8c;
            case 0x124EDCu: goto label_124edc;
            case 0x124F08u: goto label_124f08;
            case 0x124F2Cu: goto label_124f2c;
            case 0x124F30u: goto label_124f30;
            case 0x124F34u: goto label_124f34;
            case 0x124F58u: goto label_124f58;
            case 0x124F6Cu: goto label_124f6c;
            case 0x124F74u: goto label_124f74;
            case 0x124F78u: goto label_124f78;
            case 0x124F7Cu: goto label_124f7c;
            case 0x124F80u: goto label_124f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12504Cu;
}
