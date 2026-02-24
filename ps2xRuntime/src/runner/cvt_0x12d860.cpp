#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cvt
// Address: 0x12d860 - 0x12da10
void cvt_0x12d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cvt_0x12d860");
#endif

    ctx->pc = 0x12d860u;

    // 0x12d860: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12d864: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x12d864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12d868: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x12d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x12d86c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x12d86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x12d870: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x12d870u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d874: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x12d874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x12d878: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12d878u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d87c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x12d87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x12d880: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12d880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d884: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x12d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x12d888: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12d888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d88c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x12d88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12d890: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12d890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d894: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x12d894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x12d898: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12d898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d89c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12d89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12d8a0: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12d8a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x12d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x12d8a8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12d8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ac: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D8ACu;
    {
        const bool branch_taken_0x12d8ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8ACu;
            // 0x12d8b0: 0xffb30040  sd          $s3, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8ac) {
            ctx->pc = 0x12D8BCu;
            goto label_12d8bc;
        }
    }
    ctx->pc = 0x12D8B4u;
    // 0x12d8b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12D8B4u;
    {
        const bool branch_taken_0x12d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8B4u;
            // 0x12d8b8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8b4) {
            ctx->pc = 0x12D8D8u;
            goto label_12d8d8;
        }
    }
    ctx->pc = 0x12D8BCu;
label_12d8bc:
    // 0x12d8bc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x12d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12d8c0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D8C0u;
    {
        const bool branch_taken_0x12d8c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8C0u;
            // 0x12d8c4: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8c0) {
            ctx->pc = 0x12D8D0u;
            goto label_12d8d0;
        }
    }
    ctx->pc = 0x12D8C8u;
    // 0x12d8c8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D8C8u;
    {
        const bool branch_taken_0x12d8c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8C8u;
            // 0x12d8cc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8c8) {
            ctx->pc = 0x12D8D8u;
            goto label_12d8d8;
        }
    }
    ctx->pc = 0x12D8D0u;
label_12d8d0:
    // 0x12d8d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12d8d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12d8d4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12d8d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12d8d8:
    // 0x12d8d8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12d8d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12d8dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12d8e0: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D8E0u;
    {
        const bool branch_taken_0x12d8e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x12d8e0) {
            ctx->pc = 0x12D8E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8E0u;
            // 0x12d8e4: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D900u;
            goto label_12d900;
        }
    }
    ctx->pc = 0x12D8E8u;
    // 0x12d8e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ec: 0xc04a31e  jal         func_128C78
    ctx->pc = 0x12D8ECu;
    SET_GPR_U32(ctx, 31, 0x12D8F4u);
    ctx->pc = 0x12D8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8ECu;
            // 0x12d8f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128C78u;
    if (runtime->hasFunction(0x128C78u)) {
        auto targetFn = runtime->lookupFunction(0x128C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8F4u; }
        if (ctx->pc != 0x12D8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x128c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8F4u; }
        if (ctx->pc != 0x12D8F4u) { return; }
    }
    ctx->pc = 0x12D8F4u;
    // 0x12d8f4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x12d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12d8f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12d8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8fc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x12d8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_12d900:
    // 0x12d900: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d904: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d908: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12d908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d90c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12d90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d910: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12d910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d914: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12d914u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d918: 0xc04b7ca  jal         func_12DF28
    ctx->pc = 0x12D918u;
    SET_GPR_U32(ctx, 31, 0x12D920u);
    ctx->pc = 0x12D91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D918u;
            // 0x12d91c: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF28u;
    if (runtime->hasFunction(0x12DF28u)) {
        auto targetFn = runtime->lookupFunction(0x12DF28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D920u; }
        if (ctx->pc != 0x12D920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x12df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D920u; }
        if (ctx->pc != 0x12D920u) { return; }
    }
    ctx->pc = 0x12D920u;
    // 0x12d920: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12d920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d924: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x12d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12d928: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D928u;
    {
        const bool branch_taken_0x12d928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12D92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D928u;
            // 0x12d92c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d928) {
            ctx->pc = 0x12D938u;
            goto label_12d938;
        }
    }
    ctx->pc = 0x12D930u;
    // 0x12d930: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12D930u;
    {
        const bool branch_taken_0x12d930 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D930u;
            // 0x12d934: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d930) {
            ctx->pc = 0x12D944u;
            goto label_12d944;
        }
    }
    ctx->pc = 0x12D938u;
label_12d938:
    // 0x12d938: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x12d938u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 23), _mm_cvtsi32_si128((int)1u)));
    // 0x12d93c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12D93Cu;
    {
        const bool branch_taken_0x12d93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D93Cu;
            // 0x12d940: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d93c) {
            ctx->pc = 0x12D9D0u;
            goto label_12d9d0;
        }
    }
    ctx->pc = 0x12D944u;
label_12d944:
    // 0x12d944: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12D944u;
    {
        const bool branch_taken_0x12d944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x12D948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D944u;
            // 0x12d948: 0x2748021  addu        $s0, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d944) {
            ctx->pc = 0x12D980u;
            goto label_12d980;
        }
    }
    ctx->pc = 0x12D94Cu;
    // 0x12d94c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12d950: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x12d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12d954: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12D954u;
    {
        const bool branch_taken_0x12d954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12d954) {
            ctx->pc = 0x12D958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D954u;
            // 0x12d958: 0x8ea20000  lw          $v0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D97Cu;
            goto label_12d97c;
        }
    }
    ctx->pc = 0x12D95Cu;
    // 0x12d95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d960: 0xc04a482  jal         func_129208
    ctx->pc = 0x12D960u;
    SET_GPR_U32(ctx, 31, 0x12D968u);
    ctx->pc = 0x12D964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D960u;
            // 0x12d964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D968u; }
        if (ctx->pc != 0x12D968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D968u; }
        if (ctx->pc != 0x12D968u) { return; }
    }
    ctx->pc = 0x12D968u;
    // 0x12d968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D968u;
    {
        const bool branch_taken_0x12d968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D968u;
            // 0x12d96c: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d968) {
            ctx->pc = 0x12D978u;
            goto label_12d978;
        }
    }
    ctx->pc = 0x12D970u;
    // 0x12d970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d974: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x12d974u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_12d978:
    // 0x12d978: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x12d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12d97c:
    // 0x12d97c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12d980:
    // 0x12d980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d984: 0xc04a482  jal         func_129208
    ctx->pc = 0x12D984u;
    SET_GPR_U32(ctx, 31, 0x12D98Cu);
    ctx->pc = 0x12D988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D984u;
            // 0x12d988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129208u;
    if (runtime->hasFunction(0x129208u)) {
        auto targetFn = runtime->lookupFunction(0x129208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D98Cu; }
        if (ctx->pc != 0x12D98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x129208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D98Cu; }
        if (ctx->pc != 0x12D98Cu) { return; }
    }
    ctx->pc = 0x12D98Cu;
    // 0x12d98c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12D98Cu;
    {
        const bool branch_taken_0x12d98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d98c) {
            ctx->pc = 0x12D990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D98Cu;
            // 0x12d990: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D994u;
            goto label_12d994;
        }
    }
    ctx->pc = 0x12D994u;
label_12d994:
    // 0x12d994: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12d998: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12d998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12d99c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12D99Cu;
    {
        const bool branch_taken_0x12d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D99Cu;
            // 0x12d9a0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d99c) {
            ctx->pc = 0x12D9D4u;
            goto label_12d9d4;
        }
    }
    ctx->pc = 0x12D9A4u;
    // 0x12d9a4: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x12d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12d9a8:
    // 0x12d9a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d9ac: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x12d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x12d9b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12d9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9b4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12d9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12d9b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12d9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9bc: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x12d9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12d9c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12D9C0u;
    {
        const bool branch_taken_0x12d9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9c0) {
            ctx->pc = 0x12D9A8u;
            goto label_12d9a8;
        }
    }
    ctx->pc = 0x12D9C8u;
    // 0x12d9c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12D9C8u;
    {
        const bool branch_taken_0x12d9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9C8u;
            // 0x12d9cc: 0x731823  subu        $v1, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9c8) {
            ctx->pc = 0x12D9D8u;
            goto label_12d9d8;
        }
    }
    ctx->pc = 0x12D9D0u;
label_12d9d0:
    // 0x12d9d0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12d9d4:
    // 0x12d9d4: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x12d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_12d9d8:
    // 0x12d9d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12d9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d9dc: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x12d9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x12d9e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12d9e4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x12d9e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12d9e8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x12d9e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12d9ec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x12d9ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12d9f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x12d9f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d9f4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x12d9f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d9f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x12d9f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d9fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12d9fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12da00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x12da00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12da04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12da04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12da08: 0x3e00008  jr          $ra
    ctx->pc = 0x12DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA08u;
            // 0x12da0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D8BCu: goto label_12d8bc;
            case 0x12D8D0u: goto label_12d8d0;
            case 0x12D8D8u: goto label_12d8d8;
            case 0x12D900u: goto label_12d900;
            case 0x12D938u: goto label_12d938;
            case 0x12D944u: goto label_12d944;
            case 0x12D978u: goto label_12d978;
            case 0x12D97Cu: goto label_12d97c;
            case 0x12D980u: goto label_12d980;
            case 0x12D994u: goto label_12d994;
            case 0x12D9A8u: goto label_12d9a8;
            case 0x12D9D0u: goto label_12d9d0;
            case 0x12D9D4u: goto label_12d9d4;
            case 0x12D9D8u: goto label_12d9d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DA10u;
}
