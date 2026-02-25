#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: huft_build
// Address: 0x1f07b8 - 0x1f0d88
void huft_build_0x1f07b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("huft_build_0x1f07b8");
#endif

    ctx->pc = 0x1f07b8u;

    // 0x1f07b8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1f07b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1f07bc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1f07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1f07c0: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1f07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x1f07c4: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1f07c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x1f07c8: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x1f07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x1f07cc: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x1f07ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x1f07d0: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x1f07d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x1f07d4: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x1f07d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x1f07d8: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x1f07d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x1f07dc: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x1f07dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x1f07e0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1f07e0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07e4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1f07e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07e8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f07e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f07ec: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x1f07ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x1f07f0: 0xafa800d4  sw          $t0, 0xD4($sp)
    ctx->pc = 0x1f07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 8));
    // 0x1f07f4: 0xafa900d8  sw          $t1, 0xD8($sp)
    ctx->pc = 0x1f07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 9));
    // 0x1f07f8: 0xafab00dc  sw          $t3, 0xDC($sp)
    ctx->pc = 0x1f07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 11));
    // 0x1f07fc: 0x8fb30150  lw          $s3, 0x150($sp)
    ctx->pc = 0x1f07fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f0800: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0804: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f0804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f0808: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1f0808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1f080c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1f080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1f0810: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1f0810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1f0814: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f0814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f0818: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f081c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1f081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1f0820: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1f0820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1f0824: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f0824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f0828: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1f0828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1f082c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1f082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1f0830: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f0830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1f0834: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1f0834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1f0838: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1f0838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1f083c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1f083cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1f0840: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x1f0840u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0844: 0x3c0682d  daddu       $t5, $fp, $zero
    ctx->pc = 0x1f0844u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f0848:
    // 0x1f0848: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x1f0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1f084c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0850: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f0850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f0854: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f085c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f085cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f0860: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1f0860u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1f0864: 0x15a0fff8  bnez        $t5, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0864u;
    {
        const bool branch_taken_0x1f0864 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0864u;
            // 0x1f0868: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0864) {
            ctx->pc = 0x1F0848u;
            goto label_1f0848;
        }
    }
    ctx->pc = 0x1F086Cu;
    // 0x1f086c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0870: 0x545e0006  bnel        $v0, $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0870u;
    {
        const bool branch_taken_0x1f0870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x1f0870) {
            ctx->pc = 0x1F0874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0870u;
            // 0x1f0874: 0x8d590000  lw          $t9, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F088Cu;
            goto label_1f088c;
        }
    }
    ctx->pc = 0x1F0878u;
    // 0x1f0878: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1f0878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1f087c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f087cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f0880: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x1f0880u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x1f0884: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1F0884u;
    {
        const bool branch_taken_0x1f0884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0884u;
            // 0x1f0888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0884) {
            ctx->pc = 0x1F0D5Cu;
            goto label_1f0d5c;
        }
    }
    ctx->pc = 0x1F088Cu;
label_1f088c:
    // 0x1f088c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f0890: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0890u;
    {
        const bool branch_taken_0x1f0890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0890u;
            // 0x1f0894: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0890) {
            ctx->pc = 0x1F08C0u;
            goto label_1f08c0;
        }
    }
    ctx->pc = 0x1F0898u;
    // 0x1f0898: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f089c:
    // 0x1f089c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x1f089cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f08a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F08A0u;
    {
        const bool branch_taken_0x1f08a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F08A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08A0u;
            // 0x1f08a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08a0) {
            ctx->pc = 0x1F08C4u;
            goto label_1f08c4;
        }
    }
    ctx->pc = 0x1F08A8u;
    // 0x1f08a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f08ac: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f08acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f08b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f08b4: 0x0  nop
    ctx->pc = 0x1f08b4u;
    // NOP
    // 0x1f08b8: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F08B8u;
    {
        const bool branch_taken_0x1f08b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08b8) {
            ctx->pc = 0x1F08BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08B8u;
            // 0x1f08bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F089Cu;
            goto label_1f089c;
        }
    }
    ctx->pc = 0x1F08C0u;
label_1f08c0:
    // 0x1f08c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1f08c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f08c4:
    // 0x1f08c4: 0x325102b  sltu        $v0, $t9, $a1
    ctx->pc = 0x1f08c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1f08c8: 0xa2c80b  movn        $t9, $a1, $v0
    ctx->pc = 0x1f08c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 5));
    // 0x1f08cc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1f08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1f08d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F08D0u;
    {
        const bool branch_taken_0x1f08d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F08D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08D0u;
            // 0x1f08d4: 0x240d000f  addiu       $t5, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08d0) {
            ctx->pc = 0x1F0900u;
            goto label_1f0900;
        }
    }
    ctx->pc = 0x1F08D8u;
    // 0x1f08d8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1f08d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_1f08dc:
    // 0x1f08dc: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F08DCu;
    {
        const bool branch_taken_0x1f08dc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F08E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08DCu;
            // 0x1f08e0: 0xd1080  sll         $v0, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08dc) {
            ctx->pc = 0x1F0900u;
            goto label_1f0900;
        }
    }
    ctx->pc = 0x1F08E4u;
    // 0x1f08e4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f08e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f08ec: 0x0  nop
    ctx->pc = 0x1f08ecu;
    // NOP
    // 0x1f08f0: 0x0  nop
    ctx->pc = 0x1f08f0u;
    // NOP
    // 0x1f08f4: 0x0  nop
    ctx->pc = 0x1f08f4u;
    // NOP
    // 0x1f08f8: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F08F8u;
    {
        const bool branch_taken_0x1f08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08f8) {
            ctx->pc = 0x1F08FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F08F8u;
            // 0x1f08fc: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F08DCu;
            goto label_1f08dc;
        }
    }
    ctx->pc = 0x1F0900u;
label_1f0900:
    // 0x1f0900: 0x1a0902d  daddu       $s2, $t5, $zero
    ctx->pc = 0x1f0900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0904: 0x259102b  sltu        $v0, $s2, $t9
    ctx->pc = 0x1f0904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 25)) ? 1 : 0);
    // 0x1f0908: 0x242c80b  movn        $t9, $s2, $v0
    ctx->pc = 0x1f0908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 18));
    // 0x1f090c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f090cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0910: 0x824804  sllv        $t1, $v0, $a0
    ctx->pc = 0x1f0910u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1f0914: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x1f0914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1f0918: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0918u;
    {
        const bool branch_taken_0x1f0918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F091Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0918u;
            // 0x1f091c: 0xad590000  sw          $t9, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0918) {
            ctx->pc = 0x1F0944u;
            goto label_1f0944;
        }
    }
    ctx->pc = 0x1F0920u;
label_1f0920:
    // 0x1f0920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f0924: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f0924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f0928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f092c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x1f092cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f0930: 0x5200107  bltz        $t1, . + 4 + (0x107 << 2)
    ctx->pc = 0x1F0930u;
    {
        const bool branch_taken_0x1f0930 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1F0934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0930u;
            // 0x1f0934: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0930) {
            ctx->pc = 0x1F0D50u;
            goto label_1f0d50;
        }
    }
    ctx->pc = 0x1F0938u;
    // 0x1f0938: 0x8d102b  sltu        $v0, $a0, $t5
    ctx->pc = 0x1f0938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1f093c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F093Cu;
    {
        const bool branch_taken_0x1f093c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F093Cu;
            // 0x1f0940: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f093c) {
            ctx->pc = 0x1F0920u;
            goto label_1f0920;
        }
    }
    ctx->pc = 0x1F0944u;
label_1f0944:
    // 0x1f0944: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1f0944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1f0948: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f0948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f094c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0950: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x1f0950u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f0954: 0x5200101  bltz        $t1, . + 4 + (0x101 << 2)
    ctx->pc = 0x1F0954u;
    {
        const bool branch_taken_0x1f0954 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1F0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0954u;
            // 0x1f0958: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0954) {
            ctx->pc = 0x1F0D5Cu;
            goto label_1f0d5c;
        }
    }
    ctx->pc = 0x1F095Cu;
    // 0x1f095c: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x1f095cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1f0960: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f0960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f0964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f0964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0968: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1f096c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f096cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f0970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f0970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0974: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f0974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f0978: 0x27af0004  addiu       $t7, $sp, 0x4
    ctx->pc = 0x1f0978u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f097c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1f097cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1f0980: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0980u;
    {
        const bool branch_taken_0x1f0980 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0980u;
            // 0x1f0984: 0x27ac0098  addiu       $t4, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0980) {
            ctx->pc = 0x1F09A4u;
            goto label_1f09a4;
        }
    }
    ctx->pc = 0x1F0988u;
label_1f0988:
    // 0x1f0988: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x1f0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1f098c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0990: 0xad840000  sw          $a0, 0x0($t4)
    ctx->pc = 0x1f0990u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
    // 0x1f0994: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x1f0994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x1f0998: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1f0998u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1f099c: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F099Cu;
    {
        const bool branch_taken_0x1f099c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F09A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F099Cu;
            // 0x1f09a0: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f099c) {
            ctx->pc = 0x1F0988u;
            goto label_1f0988;
        }
    }
    ctx->pc = 0x1F09A4u;
label_1f09a4:
    // 0x1f09a4: 0x1c0782d  daddu       $t7, $t6, $zero
    ctx->pc = 0x1f09a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09a8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1f09a8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f09ac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1f09acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f09b0: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x1f09b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_1f09b4:
    // 0x1f09b4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F09B4u;
    {
        const bool branch_taken_0x1f09b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F09B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09B4u;
            // 0x1f09b8: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f09b4) {
            ctx->pc = 0x1F09E0u;
            goto label_1f09e0;
        }
    }
    ctx->pc = 0x1F09BCu;
    // 0x1f09bc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1f09c0: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1f09c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1f09c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1f09c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f09c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f09cc: 0x8fa70158  lw          $a3, 0x158($sp)
    ctx->pc = 0x1f09ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1f09d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f09d4: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x1f09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x1f09d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f09dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f09dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f09e0:
    // 0x1f09e0: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1f09e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1f09e4: 0x1be102b  sltu        $v0, $t5, $fp
    ctx->pc = 0x1f09e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1f09e8: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F09E8u;
    {
        const bool branch_taken_0x1f09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f09e8) {
            ctx->pc = 0x1F09ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F09E8u;
            // 0x1f09ec: 0x8de40000  lw          $a0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F09B4u;
            goto label_1f09b4;
        }
    }
    ctx->pc = 0x1F09F0u;
    // 0x1f09f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f09f4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f09f8: 0x8c5e0090  lw          $fp, 0x90($v0)
    ctx->pc = 0x1f09f8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1f09fc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1f09fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a00: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1f0a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1f0a04: 0x8faf0158  lw          $t7, 0x158($sp)
    ctx->pc = 0x1f0a04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1f0a08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f0a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0a0c: 0x197023  negu        $t6, $t9
    ctx->pc = 0x1f0a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 25)));
    // 0x1f0a10: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1f0a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1f0a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f0a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a18: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1f0a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f0a1c: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x1F0A1Cu;
    {
        const bool branch_taken_0x1f0a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A1Cu;
            // 0x1f0a20: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a1c) {
            ctx->pc = 0x1F0D38u;
            goto label_1f0d38;
        }
    }
    ctx->pc = 0x1F0A24u;
    // 0x1f0a24: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f0a28:
    // 0x1f0a28: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1f0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f0a2c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f0a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0a30: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f0a34: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0a38: 0x10ca00bb  beq         $a2, $t2, . + 4 + (0xBB << 2)
    ctx->pc = 0x1F0A38u;
    {
        const bool branch_taken_0x1f0a38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        ctx->pc = 0x1F0A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A38u;
            // 0x1f0a3c: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a38) {
            ctx->pc = 0x1F0D28u;
            goto label_1f0d28;
        }
    }
    ctx->pc = 0x1F0A40u;
    // 0x1f0a40: 0x8fab0158  lw          $t3, 0x158($sp)
    ctx->pc = 0x1f0a40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x1f0a44: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x1f0a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1f0a48: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1f0a4c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1f0a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a50: 0x24acffff  addiu       $t4, $a1, -0x1
    ctx->pc = 0x1f0a50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f0a54: 0xafac00e4  sw          $t4, 0xE4($sp)
    ctx->pc = 0x1f0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 12));
    // 0x1f0a58: 0x1d91021  addu        $v0, $t6, $t9
    ctx->pc = 0x1f0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
label_1f0a5c:
    // 0x1f0a5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f0a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0a60: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1f0a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f0a64: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F0A64u;
    {
        const bool branch_taken_0x1f0a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0A64u;
            // 0x1f0a68: 0xae1023  subu        $v0, $a1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0a64) {
            ctx->pc = 0x1F0BD0u;
            goto label_1f0bd0;
        }
    }
    ctx->pc = 0x1F0A6Cu;
    // 0x1f0a6c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1f0a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0a70: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x1f0a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f0a74: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x1f0a74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f0a78: 0xafb000f0  sw          $s0, 0xF0($sp)
    ctx->pc = 0x1f0a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 16));
    // 0x1f0a7c: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x1f0a7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0a80: 0x27b60040  addiu       $s6, $sp, 0x40
    ctx->pc = 0x1f0a80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f0a84: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x1f0a84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a88:
    // 0x1f0a88: 0x24ec023  subu        $t8, $s2, $t6
    ctx->pc = 0x1f0a88u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 14)));
    // 0x1f0a8c: 0x338102b  sltu        $v0, $t9, $t8
    ctx->pc = 0x1f0a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0a90: 0x322c00b  movn        $t8, $t9, $v0
    ctx->pc = 0x1f0a90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 25));
    // 0x1f0a94: 0xae2023  subu        $a0, $a1, $t6
    ctx->pc = 0x1f0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1f0a98: 0x8b5004  sllv        $t2, $t3, $a0
    ctx->pc = 0x1f0a98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x1f0a9c: 0x22a102b  sltu        $v0, $s1, $t2
    ctx->pc = 0x1f0a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f0aa0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F0AA0u;
    {
        const bool branch_taken_0x1f0aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AA0u;
            // 0x1f0aa4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0aa0) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0AA8u;
    // 0x1f0aa8: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x1f0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1f0aac: 0x244affff  addiu       $t2, $v0, -0x1
    ctx->pc = 0x1f0aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0ab0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1f0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f0ab4: 0x3a26021  addu        $t4, $sp, $v0
    ctx->pc = 0x1f0ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f0ab8: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x1f0ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0abc: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F0ABCu;
    {
        const bool branch_taken_0x1f0abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0abc) {
            ctx->pc = 0x1F0AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0ABCu;
            // 0x1f0ac0: 0x8bc004  sllv        $t8, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B1Cu;
            goto label_1f0b1c;
        }
    }
    ctx->pc = 0x1F0AC4u;
    // 0x1f0ac4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f0ac8: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x1f0ac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0acc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F0ACCu;
    {
        const bool branch_taken_0x1f0acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0acc) {
            ctx->pc = 0x1F0AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0ACCu;
            // 0x1f0ad0: 0x8bc004  sllv        $t8, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B1Cu;
            goto label_1f0b1c;
        }
    }
    ctx->pc = 0x1F0AD4u;
    // 0x1f0ad4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1f0ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1f0ad8: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1f0ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1f0adc: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1f0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1f0ae0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ae4: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f0ae8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0AE8u;
    {
        const bool branch_taken_0x1f0ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ae8) {
            ctx->pc = 0x1F0AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AE8u;
            // 0x1f0aec: 0x8bc004  sllv        $t8, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0B1Cu;
            goto label_1f0b1c;
        }
    }
    ctx->pc = 0x1F0AF0u;
    // 0x1f0af0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f0af4:
    // 0x1f0af4: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x1f0af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0af8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0AF8u;
    {
        const bool branch_taken_0x1f0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0AF8u;
            // 0x1f0afc: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0af8) {
            ctx->pc = 0x1F0B18u;
            goto label_1f0b18;
        }
    }
    ctx->pc = 0x1F0B00u;
    // 0x1f0b00: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1f0b04: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1f0b04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1f0b08: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1f0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1f0b0c: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x1f0b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1f0b10: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0B10u;
    {
        const bool branch_taken_0x1f0b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0b10) {
            ctx->pc = 0x1F0B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B10u;
            // 0x1f0b14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0AF4u;
            goto label_1f0af4;
        }
    }
    ctx->pc = 0x1F0B18u;
label_1f0b18:
    // 0x1f0b18: 0x8bc004  sllv        $t8, $t3, $a0
    ctx->pc = 0x1f0b18u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
label_1f0b1c:
    // 0x1f0b1c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f0b20: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1f0b24: 0x2c4205a1  sltiu       $v0, $v0, 0x5A1
    ctx->pc = 0x1f0b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1441) ? 1 : 0);
    // 0x1f0b28: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x1F0B28u;
    {
        const bool branch_taken_0x1f0b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B28u;
            // 0x1f0b2c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b28) {
            ctx->pc = 0x1F0D5Cu;
            goto label_1f0d5c;
        }
    }
    ctx->pc = 0x1F0B30u;
    // 0x1f0b30: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x1f0b30u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1f0b34: 0x27ac0050  addiu       $t4, $sp, 0x50
    ctx->pc = 0x1f0b34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f0b38: 0x18a1021  addu        $v0, $t4, $t2
    ctx->pc = 0x1f0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x1f0b3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f0b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f0b40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0b44: 0x8fb000dc  lw          $s0, 0xDC($sp)
    ctx->pc = 0x1f0b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1f0b48: 0x2034021  addu        $t0, $s0, $v1
    ctx->pc = 0x1f0b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f0b4c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x1f0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x1f0b50: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f0b54: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x1f0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1f0b58: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F0B58u;
    {
        const bool branch_taken_0x1f0b58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0B58u;
            // 0x1f0b5c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b58) {
            ctx->pc = 0x1F0BB4u;
            goto label_1f0bb4;
        }
    }
    ctx->pc = 0x1F0B60u;
    // 0x1f0b60: 0x2ea1021  addu        $v0, $s7, $t2
    ctx->pc = 0x1f0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x1f0b64: 0xac4d0000  sw          $t5, 0x0($v0)
    ctx->pc = 0x1f0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 13));
    // 0x1f0b68: 0xa3b90041  sb          $t9, 0x41($sp)
    ctx->pc = 0x1f0b68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 25));
    // 0x1f0b6c: 0xa3a40040  sb          $a0, 0x40($sp)
    ctx->pc = 0x1f0b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f0b70: 0x1d91023  subu        $v0, $t6, $t9
    ctx->pc = 0x1f0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
    // 0x1f0b74: 0x4d2006  srlv        $a0, $t5, $v0
    ctx->pc = 0x1f0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f0b78: 0x2543fffc  addiu       $v1, $t2, -0x4
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x1f0b7c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x1f0b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1f0b80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0b84: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x1f0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1f0b88: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1f0b88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1f0b8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0b90: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1f0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1f0b94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0b98: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1f0b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0ba0: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x1f0ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f0ba4: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x1f0ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f0ba8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1f0ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0BACu;
    {
        const bool branch_taken_0x1f0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BACu;
            // 0x1f0bb0: 0xb4430000  sdr         $v1, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0bac) {
            ctx->pc = 0x1F0BBCu;
            goto label_1f0bbc;
        }
    }
    ctx->pc = 0x1F0BB4u;
label_1f0bb4:
    // 0x1f0bb4: 0x8fb000d8  lw          $s0, 0xD8($sp)
    ctx->pc = 0x1f0bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1f0bb8: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x1f0bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_1f0bbc:
    // 0x1f0bbc: 0x1d91821  addu        $v1, $t6, $t9
    ctx->pc = 0x1f0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
    // 0x1f0bc0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f0bc4: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
    ctx->pc = 0x1F0BC4u;
    {
        const bool branch_taken_0x1f0bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bc4) {
            ctx->pc = 0x1F0BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BC4u;
            // 0x1f0bc8: 0x60702d  daddu       $t6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0A88u;
            goto label_1f0a88;
        }
    }
    ctx->pc = 0x1F0BCCu;
    // 0x1f0bcc: 0xae1023  subu        $v0, $a1, $t6
    ctx->pc = 0x1f0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
label_1f0bd0:
    // 0x1f0bd0: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x1f0bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0bd4: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x1f0bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f0bd8: 0x1f1102b  sltu        $v0, $t7, $s1
    ctx->pc = 0x1f0bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1f0bdc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0BDCu;
    {
        const bool branch_taken_0x1f0bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bdc) {
            ctx->pc = 0x1F0BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BDCu;
            // 0x1f0be0: 0x8de30000  lw          $v1, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0BF0u;
            goto label_1f0bf0;
        }
    }
    ctx->pc = 0x1F0BE4u;
    // 0x1f0be4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x1f0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1f0be8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1F0BE8u;
    {
        const bool branch_taken_0x1f0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BE8u;
            // 0x1f0bec: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0be8) {
            ctx->pc = 0x1F0C54u;
            goto label_1f0c54;
        }
    }
    ctx->pc = 0x1F0BF0u;
label_1f0bf0:
    // 0x1f0bf0: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x1f0bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1f0bf4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0BF4u;
    {
        const bool branch_taken_0x1f0bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0bf4) {
            ctx->pc = 0x1F0BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0BF4u;
            // 0x1f0bf8: 0x8de20000  lw          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0C18u;
            goto label_1f0c18;
        }
    }
    ctx->pc = 0x1F0BFCu;
    // 0x1f0bfc: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1f0bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f0c00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0C00u;
    {
        const bool branch_taken_0x1f0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C00u;
            // 0x1f0c04: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c00) {
            ctx->pc = 0x1F0C0Cu;
            goto label_1f0c0c;
        }
    }
    ctx->pc = 0x1F0C08u;
    // 0x1f0c08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f0c08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0c0c:
    // 0x1f0c0c: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x1f0c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f0c10: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F0C10u;
    {
        const bool branch_taken_0x1f0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C10u;
            // 0x1f0c14: 0x8de20000  lw          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c10) {
            ctx->pc = 0x1F0C4Cu;
            goto label_1f0c4c;
        }
    }
    ctx->pc = 0x1F0C18u;
label_1f0c18:
    // 0x1f0c18: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f0c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0c20: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x1f0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1f0c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0c28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f0c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0c2c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1f0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1f0c30: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x1f0c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0c34: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x1f0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1f0c38: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1f0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f0c3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0c40: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1f0c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f0c44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f0c48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0c4c:
    // 0x1f0c4c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1f0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1f0c50: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x1f0c50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_1f0c54:
    // 0x1f0c54: 0xae1023  subu        $v0, $a1, $t6
    ctx->pc = 0x1f0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
    // 0x1f0c58: 0x545004  sllv        $t2, $s4, $v0
    ctx->pc = 0x1f0c58u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f0c5c: 0x1cd2006  srlv        $a0, $t5, $t6
    ctx->pc = 0x1f0c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 14) & 0x1F));
    // 0x1f0c60: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x1f0c60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0c64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F0C64u;
    {
        const bool branch_taken_0x1f0c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C64u;
            // 0x1f0c68: 0x8fa200e4  lw          $v0, 0xE4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c64) {
            ctx->pc = 0x1F0C9Cu;
            goto label_1f0c9c;
        }
    }
    ctx->pc = 0x1F0C6Cu;
    // 0x1f0c6c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1f0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f0c70: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1f0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f0c74:
    // 0x1f0c74: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1f0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f0c78: 0x686b0007  ldl         $t3, 0x7($v1)
    ctx->pc = 0x1f0c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1f0c7c: 0x6c6b0000  ldr         $t3, 0x0($v1)
    ctx->pc = 0x1f0c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1f0c80: 0xb04b0007  sdl         $t3, 0x7($v0)
    ctx->pc = 0x1f0c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0c84: 0xb44b0000  sdr         $t3, 0x0($v0)
    ctx->pc = 0x1f0c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f0c88: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1f0c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1f0c8c: 0x98102b  sltu        $v0, $a0, $t8
    ctx->pc = 0x1f0c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x1f0c90: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0C90u;
    {
        const bool branch_taken_0x1f0c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0C90u;
            // 0x1f0c94: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0c90) {
            ctx->pc = 0x1F0C74u;
            goto label_1f0c74;
        }
    }
    ctx->pc = 0x1F0C98u;
    // 0x1f0c98: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1f0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1f0c9c:
    // 0x1f0c9c: 0x542004  sllv        $a0, $s4, $v0
    ctx->pc = 0x1f0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
    // 0x1f0ca0: 0x1a41024  and         $v0, $t5, $a0
    ctx->pc = 0x1f0ca0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 4)));
    // 0x1f0ca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F0CA4u;
    {
        const bool branch_taken_0x1f0ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CA4u;
            // 0x1f0ca8: 0x1a46826  xor         $t5, $t5, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 13, PS2_PXOR(GPR_VEC(ctx, 13), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ca4) {
            ctx->pc = 0x1F0CC8u;
            goto label_1f0cc8;
        }
    }
    ctx->pc = 0x1F0CACu;
label_1f0cac:
    // 0x1f0cac: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1f0cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1f0cb0: 0x1a41024  and         $v0, $t5, $a0
    ctx->pc = 0x1f0cb0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 4)));
    // 0x1f0cb4: 0x0  nop
    ctx->pc = 0x1f0cb4u;
    // NOP
    // 0x1f0cb8: 0x0  nop
    ctx->pc = 0x1f0cb8u;
    // NOP
    // 0x1f0cbc: 0x0  nop
    ctx->pc = 0x1f0cbcu;
    // NOP
    // 0x1f0cc0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F0CC0u;
    {
        const bool branch_taken_0x1f0cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CC0u;
            // 0x1f0cc4: 0x1a46826  xor         $t5, $t5, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 13, PS2_PXOR(GPR_VEC(ctx, 13), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cc0) {
            ctx->pc = 0x1F0CACu;
            goto label_1f0cac;
        }
    }
    ctx->pc = 0x1F0CC8u;
label_1f0cc8:
    // 0x1f0cc8: 0x1d41004  sllv        $v0, $s4, $t6
    ctx->pc = 0x1f0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 14) & 0x1F));
    // 0x1f0ccc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0cd0: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1f0cd0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 2)));
    // 0x1f0cd4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1f0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1f0cd8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x1f0cd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0cdc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1f0ce0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0ce4: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0CE4u;
    {
        const bool branch_taken_0x1f0ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F0CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0CE4u;
            // 0x1f0ce8: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ce4) {
            ctx->pc = 0x1F0D18u;
            goto label_1f0d18;
        }
    }
    ctx->pc = 0x1F0CECu;
    // 0x1f0cec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1f0cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0cf0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1f0cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1f0cf4:
    // 0x1f0cf4: 0x1d97023  subu        $t6, $t6, $t9
    ctx->pc = 0x1f0cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
    // 0x1f0cf8: 0x1ca1004  sllv        $v0, $t2, $t6
    ctx->pc = 0x1f0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x1f0cfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0d00: 0x1a21824  and         $v1, $t5, $v0
    ctx->pc = 0x1f0d00u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 2)));
    // 0x1f0d04: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1f0d08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f0d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0d10: 0x5462fff8  bnel        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F0D10u;
    {
        const bool branch_taken_0x1f0d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d10) {
            ctx->pc = 0x1F0D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D10u;
            // 0x1f0d14: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0CF4u;
            goto label_1f0cf4;
        }
    }
    ctx->pc = 0x1F0D18u;
label_1f0d18:
    // 0x1f0d18: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1f0d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1f0d1c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1f0d1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0d20: 0x14cbff4e  bne         $a2, $t3, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x1F0D20u;
    {
        const bool branch_taken_0x1f0d20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 11));
        ctx->pc = 0x1F0D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D20u;
            // 0x1f0d24: 0x1d91021  addu        $v0, $t6, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d20) {
            ctx->pc = 0x1F0A5Cu;
            goto label_1f0a5c;
        }
    }
    ctx->pc = 0x1F0D28u;
label_1f0d28:
    // 0x1f0d28: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f0d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f0d2c: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1f0d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1f0d30: 0x1040ff3d  beqz        $v0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x1F0D30u;
    {
        const bool branch_taken_0x1f0d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D30u;
            // 0x1f0d34: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d30) {
            ctx->pc = 0x1F0A28u;
            goto label_1f0a28;
        }
    }
    ctx->pc = 0x1F0D38u;
label_1f0d38:
    // 0x1f0d38: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0D38u;
    {
        const bool branch_taken_0x1f0d38 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D38u;
            // 0x1f0d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d38) {
            ctx->pc = 0x1F0D58u;
            goto label_1f0d58;
        }
    }
    ctx->pc = 0x1F0D40u;
    // 0x1f0d40: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D40u;
    {
        const bool branch_taken_0x1f0d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F0D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D40u;
            // 0x1f0d44: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d40) {
            ctx->pc = 0x1F0D58u;
            goto label_1f0d58;
        }
    }
    ctx->pc = 0x1F0D48u;
    // 0x1f0d48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0D48u;
    {
        const bool branch_taken_0x1f0d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D48u;
            // 0x1f0d4c: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d48) {
            ctx->pc = 0x1F0D60u;
            goto label_1f0d60;
        }
    }
    ctx->pc = 0x1F0D50u;
label_1f0d50:
    // 0x1f0d50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0D50u;
    {
        const bool branch_taken_0x1f0d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D50u;
            // 0x1f0d54: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d50) {
            ctx->pc = 0x1F0D5Cu;
            goto label_1f0d5c;
        }
    }
    ctx->pc = 0x1F0D58u;
label_1f0d58:
    // 0x1f0d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0d5c:
    // 0x1f0d5c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1f0d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1f0d60:
    // 0x1f0d60: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1f0d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1f0d64: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1f0d64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f0d68: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x1f0d68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1f0d6c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x1f0d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f0d70: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x1f0d70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1f0d74: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x1f0d74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f0d78: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x1f0d78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x1f0d7c: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x1f0d7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f0d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0D80u;
            // 0x1f0d84: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0848u: goto label_1f0848;
            case 0x1F088Cu: goto label_1f088c;
            case 0x1F089Cu: goto label_1f089c;
            case 0x1F08C0u: goto label_1f08c0;
            case 0x1F08C4u: goto label_1f08c4;
            case 0x1F08DCu: goto label_1f08dc;
            case 0x1F0900u: goto label_1f0900;
            case 0x1F0920u: goto label_1f0920;
            case 0x1F0944u: goto label_1f0944;
            case 0x1F0988u: goto label_1f0988;
            case 0x1F09A4u: goto label_1f09a4;
            case 0x1F09B4u: goto label_1f09b4;
            case 0x1F09E0u: goto label_1f09e0;
            case 0x1F0A28u: goto label_1f0a28;
            case 0x1F0A5Cu: goto label_1f0a5c;
            case 0x1F0A88u: goto label_1f0a88;
            case 0x1F0AF4u: goto label_1f0af4;
            case 0x1F0B18u: goto label_1f0b18;
            case 0x1F0B1Cu: goto label_1f0b1c;
            case 0x1F0BB4u: goto label_1f0bb4;
            case 0x1F0BBCu: goto label_1f0bbc;
            case 0x1F0BD0u: goto label_1f0bd0;
            case 0x1F0BF0u: goto label_1f0bf0;
            case 0x1F0C0Cu: goto label_1f0c0c;
            case 0x1F0C18u: goto label_1f0c18;
            case 0x1F0C4Cu: goto label_1f0c4c;
            case 0x1F0C54u: goto label_1f0c54;
            case 0x1F0C74u: goto label_1f0c74;
            case 0x1F0C9Cu: goto label_1f0c9c;
            case 0x1F0CACu: goto label_1f0cac;
            case 0x1F0CC8u: goto label_1f0cc8;
            case 0x1F0CF4u: goto label_1f0cf4;
            case 0x1F0D18u: goto label_1f0d18;
            case 0x1F0D28u: goto label_1f0d28;
            case 0x1F0D38u: goto label_1f0d38;
            case 0x1F0D50u: goto label_1f0d50;
            case 0x1F0D58u: goto label_1f0d58;
            case 0x1F0D5Cu: goto label_1f0d5c;
            case 0x1F0D60u: goto label_1f0d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0D88u;
}
