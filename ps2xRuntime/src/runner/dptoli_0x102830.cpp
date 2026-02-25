#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dptoli
// Address: 0x102830 - 0x1028c4
void dptoli_0x102830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dptoli_0x102830");
#endif

    ctx->pc = 0x102830u;

    // 0x102830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102834: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x102834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x102838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x102838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10283c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102840: 0xc040798  jal         func_101E60
    ctx->pc = 0x102840u;
    SET_GPR_U32(ctx, 31, 0x102848u);
    ctx->pc = 0x102844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102840u;
            // 0x102844: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102848u; }
        if (ctx->pc != 0x102848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102848u; }
        if (ctx->pc != 0x102848u) { return; }
    }
    ctx->pc = 0x102848u;
    // 0x102848: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x102848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10284c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x10284cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x102850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102850u;
    {
        const bool branch_taken_0x102850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102850u;
            // 0x102854: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102850) {
            ctx->pc = 0x102860u;
            goto label_102860;
        }
    }
    ctx->pc = 0x102858u;
    // 0x102858: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102858u;
    {
        const bool branch_taken_0x102858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10285Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102858u;
            // 0x10285c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102858) {
            ctx->pc = 0x102868u;
            goto label_102868;
        }
    }
    ctx->pc = 0x102860u;
label_102860:
    // 0x102860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x102860u;
    {
        const bool branch_taken_0x102860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102860u;
            // 0x102864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102860) {
            ctx->pc = 0x1028B8u;
            goto label_1028b8;
        }
    }
    ctx->pc = 0x102868u;
label_102868:
    // 0x102868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102868u;
    {
        const bool branch_taken_0x102868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102868u;
            // 0x10286c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102868) {
            ctx->pc = 0x102880u;
            goto label_102880;
        }
    }
    ctx->pc = 0x102870u;
    // 0x102870: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102870u;
    {
        const bool branch_taken_0x102870 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x102874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102870u;
            // 0x102874: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102870) {
            ctx->pc = 0x102860u;
            goto label_102860;
        }
    }
    ctx->pc = 0x102878u;
    // 0x102878: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102878u;
    {
        const bool branch_taken_0x102878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10287Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102878u;
            // 0x10287c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102878) {
            ctx->pc = 0x102898u;
            goto label_102898;
        }
    }
    ctx->pc = 0x102880u;
label_102880:
    // 0x102880: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x102880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x102884: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x102884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x102888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102888u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x10288c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10288cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x102890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x102890u;
    {
        const bool branch_taken_0x102890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102890u;
            // 0x102894: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102890) {
            ctx->pc = 0x1028B8u;
            goto label_1028b8;
        }
    }
    ctx->pc = 0x102898u;
label_102898:
    // 0x102898: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x102898u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10289c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10289cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1028a0: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1028a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1028a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1028a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1028a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1028a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1028ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1028acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1028b0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1028b4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1028b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1028b8:
    // 0x1028b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1028b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1028bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1028BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1028C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028BCu;
            // 0x1028c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102860u: goto label_102860;
            case 0x102868u: goto label_102868;
            case 0x102880u: goto label_102880;
            case 0x102898u: goto label_102898;
            case 0x1028B8u: goto label_1028b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1028C4u;
}
