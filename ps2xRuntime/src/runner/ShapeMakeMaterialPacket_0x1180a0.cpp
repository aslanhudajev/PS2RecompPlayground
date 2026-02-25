#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeMakeMaterialPacket
// Address: 0x1180a0 - 0x1182dc
void ShapeMakeMaterialPacket_0x1180a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeMakeMaterialPacket_0x1180a0");
#endif

    ctx->pc = 0x1180a0u;

    // 0x1180a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1180a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1180a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1180a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1180a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1180ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1180acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1180b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1180b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1180b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1180b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1180b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1180bc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1180bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1180c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1180c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1180c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1180c8: 0xc047132  jal         func_11C4C8
    ctx->pc = 0x1180C8u;
    SET_GPR_U32(ctx, 31, 0x1180D0u);
    ctx->pc = 0x1180CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180C8u;
            // 0x1180cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4C8u;
    if (runtime->hasFunction(0x11C4C8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180D0u; }
        if (ctx->pc != 0x1180D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetDataHead_0x11c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180D0u; }
        if (ctx->pc != 0x1180D0u) { return; }
    }
    ctx->pc = 0x1180D0u;
    // 0x1180d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1180d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1180d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180d8: 0xc04713e  jal         func_11C4F8
    ctx->pc = 0x1180D8u;
    SET_GPR_U32(ctx, 31, 0x1180E0u);
    ctx->pc = 0x1180DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180D8u;
            // 0x1180dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C4F8u;
    if (runtime->hasFunction(0x11C4F8u)) {
        auto targetFn = runtime->lookupFunction(0x11C4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180E0u; }
        if (ctx->pc != 0x1180E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMaterialHead_0x11c4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180E0u; }
        if (ctx->pc != 0x1180E0u) { return; }
    }
    ctx->pc = 0x1180E0u;
    // 0x1180e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1180e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180e4: 0xc04717c  jal         func_11C5F0
    ctx->pc = 0x1180E4u;
    SET_GPR_U32(ctx, 31, 0x1180ECu);
    ctx->pc = 0x1180E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180E4u;
            // 0x1180e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C5F0u;
    if (runtime->hasFunction(0x11C5F0u)) {
        auto targetFn = runtime->lookupFunction(0x11C5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180ECu; }
        if (ctx->pc != 0x1180ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMaterialAttrib_0x11c5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180ECu; }
        if (ctx->pc != 0x1180ECu) { return; }
    }
    ctx->pc = 0x1180ECu;
    // 0x1180ec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1180ECu;
    {
        const bool branch_taken_0x1180ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1180ECu;
            // 0x1180f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180ec) {
            ctx->pc = 0x1180FCu;
            goto label_1180fc;
        }
    }
    ctx->pc = 0x1180F4u;
    // 0x1180f4: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1180F4u;
    {
        const bool branch_taken_0x1180f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1180f4) {
            ctx->pc = 0x1180F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1180F4u;
            // 0x1180f8: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11810Cu;
            goto label_11810c;
        }
    }
    ctx->pc = 0x1180FCu;
label_1180fc:
    // 0x1180fc: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x1180FCu;
    SET_GPR_U32(ctx, 31, 0x118104u);
    ctx->pc = 0x118100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180FCu;
            // 0x118100: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118104u; }
        if (ctx->pc != 0x118104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118104u; }
        if (ctx->pc != 0x118104u) { return; }
    }
    ctx->pc = 0x118104u;
    // 0x118104: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x118104u;
    {
        const bool branch_taken_0x118104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118104u;
            // 0x118108: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118104) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x11810Cu;
label_11810c:
    // 0x11810c: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11810Cu;
    {
        const bool branch_taken_0x11810c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11810Cu;
            // 0x118110: 0x8e55001c  lw          $s5, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11810c) {
            ctx->pc = 0x1181B4u;
            goto label_1181b4;
        }
    }
    ctx->pc = 0x118114u;
    // 0x118114: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x118114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x118118: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x118118u;
    {
        const bool branch_taken_0x118118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118118) {
            ctx->pc = 0x11811Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118118u;
            // 0x11811c: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1181B8u;
            goto label_1181b8;
        }
    }
    ctx->pc = 0x118120u;
    // 0x118120: 0xc0471da  jal         func_11C768
    ctx->pc = 0x118120u;
    SET_GPR_U32(ctx, 31, 0x118128u);
    ctx->pc = 0x118124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118120u;
            // 0x118124: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C768u;
    if (runtime->hasFunction(0x11C768u)) {
        auto targetFn = runtime->lookupFunction(0x11C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118128u; }
        if (ctx->pc != 0x118128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetEnv_0x11c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118128u; }
        if (ctx->pc != 0x118128u) { return; }
    }
    ctx->pc = 0x118128u;
    // 0x118128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x118128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11812c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11812Cu;
    {
        const bool branch_taken_0x11812c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11812c) {
            ctx->pc = 0x1181A4u;
            goto label_1181a4;
        }
    }
    ctx->pc = 0x118134u;
    // 0x118134: 0xc047174  jal         func_11C5D0
    ctx->pc = 0x118134u;
    SET_GPR_U32(ctx, 31, 0x11813Cu);
    ctx->pc = 0x118138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118134u;
            // 0x118138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C5D0u;
    if (runtime->hasFunction(0x11C5D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11813Cu; }
        if (ctx->pc != 0x11813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetMaterialGiftag_0x11c5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11813Cu; }
        if (ctx->pc != 0x11813Cu) { return; }
    }
    ctx->pc = 0x11813Cu;
    // 0x11813c: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x11813Cu;
    SET_GPR_U32(ctx, 31, 0x118144u);
    ctx->pc = 0x118140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11813Cu;
            // 0x118140: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118144u; }
        if (ctx->pc != 0x118144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118144u; }
        if (ctx->pc != 0x118144u) { return; }
    }
    ctx->pc = 0x118144u;
    // 0x118144: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x118144u;
    {
        const bool branch_taken_0x118144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118144u;
            // 0x118148: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118144) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x11814Cu;
    // 0x11814c: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x11814Cu;
    {
        const bool branch_taken_0x11814c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11814c) {
            ctx->pc = 0x118150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11814Cu;
            // 0x118150: 0xde250000  ld          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118180u;
            goto label_118180;
        }
    }
    ctx->pc = 0x118154u;
    // 0x118154: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x118154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118158: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x118158u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x11815c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118160: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x118160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x118164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118164u;
    {
        const bool branch_taken_0x118164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118164u;
            // 0x118168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118164) {
            ctx->pc = 0x11817Cu;
            goto label_11817c;
        }
    }
    ctx->pc = 0x11816Cu;
    // 0x11816c: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x11816Cu;
    SET_GPR_U32(ctx, 31, 0x118174u);
    ctx->pc = 0x118170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11816Cu;
            // 0x118170: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118174u; }
        if (ctx->pc != 0x118174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118174u; }
        if (ctx->pc != 0x118174u) { return; }
    }
    ctx->pc = 0x118174u;
    // 0x118174: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x118174u;
    {
        const bool branch_taken_0x118174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118174u;
            // 0x118178: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118174) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x11817Cu;
label_11817c:
    // 0x11817c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x11817cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_118180:
    // 0x118180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118184: 0x30a57fff  andi        $a1, $a1, 0x7FFF
    ctx->pc = 0x118184u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)32767u)));
    // 0x118188: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x118188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11818c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11818cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x118190: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_118194:
    // 0x118194: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x118194u;
    SET_GPR_U32(ctx, 31, 0x11819Cu);
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11819Cu; }
        if (ctx->pc != 0x11819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11819Cu; }
        if (ctx->pc != 0x11819Cu) { return; }
    }
    ctx->pc = 0x11819Cu;
    // 0x11819c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x11819Cu;
    {
        const bool branch_taken_0x11819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1181A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11819Cu;
            // 0x1181a0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11819c) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x1181A4u;
label_1181a4:
    // 0x1181a4: 0x1280002d  beqz        $s4, . + 4 + (0x2D << 2)
    ctx->pc = 0x1181A4u;
    {
        const bool branch_taken_0x1181a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1181A4u;
            // 0x1181a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181a4) {
            ctx->pc = 0x11825Cu;
            goto label_11825c;
        }
    }
    ctx->pc = 0x1181ACu;
    // 0x1181ac: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1181ACu;
    {
        const bool branch_taken_0x1181ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1181B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1181ACu;
            // 0x1181b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181ac) {
            ctx->pc = 0x118234u;
            goto label_118234;
        }
    }
    ctx->pc = 0x1181B4u;
label_1181b4:
    // 0x1181b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1181b8:
    // 0x1181b8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1181B8u;
    {
        const bool branch_taken_0x1181b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181b8) {
            ctx->pc = 0x118214u;
            goto label_118214;
        }
    }
    ctx->pc = 0x1181C0u;
    // 0x1181c0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1181c4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1181C4u;
    {
        const bool branch_taken_0x1181c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181c4) {
            ctx->pc = 0x118214u;
            goto label_118214;
        }
    }
    ctx->pc = 0x1181CCu;
    // 0x1181cc: 0xc0471c6  jal         func_11C718
    ctx->pc = 0x1181CCu;
    SET_GPR_U32(ctx, 31, 0x1181D4u);
    ctx->pc = 0x1181D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1181CCu;
            // 0x1181d0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C718u;
    if (runtime->hasFunction(0x11C718u)) {
        auto targetFn = runtime->lookupFunction(0x11C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181D4u; }
        if (ctx->pc != 0x1181D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetData_0x11c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181D4u; }
        if (ctx->pc != 0x1181D4u) { return; }
    }
    ctx->pc = 0x1181D4u;
    // 0x1181d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1181d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181d8: 0x1200fff2  beqz        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1181D8u;
    {
        const bool branch_taken_0x1181d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1181d8) {
            ctx->pc = 0x1181A4u;
            goto label_1181a4;
        }
    }
    ctx->pc = 0x1181E0u;
    // 0x1181e0: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x1181E0u;
    SET_GPR_U32(ctx, 31, 0x1181E8u);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181E8u; }
        if (ctx->pc != 0x1181E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181E8u; }
        if (ctx->pc != 0x1181E8u) { return; }
    }
    ctx->pc = 0x1181E8u;
    // 0x1181e8: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1181E8u;
    {
        const bool branch_taken_0x1181e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1181ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1181E8u;
            // 0x1181ec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1181e8) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x1181F0u;
    // 0x1181f0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1181f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1181f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1181f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1181f8: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1181F8u;
    SET_GPR_U32(ctx, 31, 0x118200u);
    ctx->pc = 0x1181FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1181F8u;
            // 0x1181fc: 0x2484e660  addiu       $a0, $a0, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118200u; }
        if (ctx->pc != 0x118200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118200u; }
        if (ctx->pc != 0x118200u) { return; }
    }
    ctx->pc = 0x118200u;
    // 0x118200: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x118200u;
    {
        const bool branch_taken_0x118200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118200u;
            // 0x118204: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118200) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x118208u;
    // 0x118208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11820c: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x11820Cu;
    {
        const bool branch_taken_0x11820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11820Cu;
            // 0x118210: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11820c) {
            ctx->pc = 0x118194u;
            goto label_118194;
        }
    }
    ctx->pc = 0x118214u;
label_118214:
    // 0x118214: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x118214u;
    {
        const bool branch_taken_0x118214 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x118214) {
            ctx->pc = 0x11825Cu;
            goto label_11825c;
        }
    }
    ctx->pc = 0x11821Cu;
    // 0x11821c: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x11821Cu;
    SET_GPR_U32(ctx, 31, 0x118224u);
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118224u; }
        if (ctx->pc != 0x118224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118224u; }
        if (ctx->pc != 0x118224u) { return; }
    }
    ctx->pc = 0x118224u;
    // 0x118224: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x118224u;
    {
        const bool branch_taken_0x118224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x118228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118224u;
            // 0x118228: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118224) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x11822Cu;
    // 0x11822c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11822cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118230: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x118230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_118234:
    // 0x118234: 0xc043d72  jal         func_10F5C8
    ctx->pc = 0x118234u;
    SET_GPR_U32(ctx, 31, 0x11823Cu);
    ctx->pc = 0x118238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118234u;
            // 0x118238: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F5C8u;
    if (runtime->hasFunction(0x10F5C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11823Cu; }
        if (ctx->pc != 0x11823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadPtr_0x10f5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11823Cu; }
        if (ctx->pc != 0x11823Cu) { return; }
    }
    ctx->pc = 0x11823Cu;
    // 0x11823c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11823Cu;
    {
        const bool branch_taken_0x11823c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11823Cu;
            // 0x118240: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11823c) {
            ctx->pc = 0x11825Cu;
            goto label_11825c;
        }
    }
    ctx->pc = 0x118244u;
    // 0x118244: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x118244u;
    {
        const bool branch_taken_0x118244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118244u;
            // 0x118248: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118244) {
            ctx->pc = 0x1182C0u;
            goto label_1182c0;
        }
    }
    ctx->pc = 0x11824Cu;
label_11824c:
    // 0x11824c: 0xc045de8  jal         func_1177A0
    ctx->pc = 0x11824Cu;
    SET_GPR_U32(ctx, 31, 0x118254u);
    ctx->pc = 0x118250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11824Cu;
            // 0x118250: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177A0u;
    if (runtime->hasFunction(0x1177A0u)) {
        auto targetFn = runtime->lookupFunction(0x1177A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118254u; }
        if (ctx->pc != 0x118254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_shape_err_0x1177a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118254u; }
        if (ctx->pc != 0x118254u) { return; }
    }
    ctx->pc = 0x118254u;
    // 0x118254: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x118254u;
    {
        const bool branch_taken_0x118254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118254u;
            // 0x118258: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118254) {
            ctx->pc = 0x1182BCu;
            goto label_1182bc;
        }
    }
    ctx->pc = 0x11825Cu;
label_11825c:
    // 0x11825c: 0xc045dfe  jal         func_1177F8
    ctx->pc = 0x11825Cu;
    SET_GPR_U32(ctx, 31, 0x118264u);
    ctx->pc = 0x118260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11825Cu;
            // 0x118260: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177F8u;
    if (runtime->hasFunction(0x1177F8u)) {
        auto targetFn = runtime->lookupFunction(0x1177F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118264u; }
        if (ctx->pc != 0x118264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1Reset_0x1177f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118264u; }
        if (ctx->pc != 0x118264u) { return; }
    }
    ctx->pc = 0x118264u;
    // 0x118264: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x118268: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x118268u;
    {
        const bool branch_taken_0x118268 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118268u;
            // 0x11826c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118268) {
            ctx->pc = 0x1182B8u;
            goto label_1182b8;
        }
    }
    ctx->pc = 0x118270u;
    // 0x118270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118274: 0x0  nop
    ctx->pc = 0x118274u;
    // NOP
label_118278:
    // 0x118278: 0xc047160  jal         func_11C580
    ctx->pc = 0x118278u;
    SET_GPR_U32(ctx, 31, 0x118280u);
    ctx->pc = 0x11827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118278u;
            // 0x11827c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C580u;
    if (runtime->hasFunction(0x11C580u)) {
        auto targetFn = runtime->lookupFunction(0x11C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118280u; }
        if (ctx->pc != 0x118280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeGetGeometryHead_0x11c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118280u; }
        if (ctx->pc != 0x118280u) { return; }
    }
    ctx->pc = 0x118280u;
    // 0x118280: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x118280u;
    {
        const bool branch_taken_0x118280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118280u;
            // 0x118284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118280) {
            ctx->pc = 0x11824Cu;
            goto label_11824c;
        }
    }
    ctx->pc = 0x118288u;
    // 0x118288: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11828c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x118290: 0x2052826  xor         $a1, $s0, $a1
    ctx->pc = 0x118290u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x118294: 0xc045f7e  jal         func_117DF8
    ctx->pc = 0x118294u;
    SET_GPR_U32(ctx, 31, 0x11829Cu);
    ctx->pc = 0x118298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118294u;
            // 0x118298: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x117DF8u;
    if (runtime->hasFunction(0x117DF8u)) {
        auto targetFn = runtime->lookupFunction(0x117DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11829Cu; }
        if (ctx->pc != 0x11829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShapeMakeGeometryPacket_0x117df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11829Cu; }
        if (ctx->pc != 0x11829Cu) { return; }
    }
    ctx->pc = 0x11829Cu;
    // 0x11829c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11829Cu;
    {
        const bool branch_taken_0x11829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11829Cu;
            // 0x1182a0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11829c) {
            ctx->pc = 0x1182B8u;
            goto label_1182b8;
        }
    }
    ctx->pc = 0x1182A4u;
    // 0x1182a4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1182a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1182a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1182a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1182ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1182ACu;
    {
        const bool branch_taken_0x1182ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1182B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1182ACu;
            // 0x1182b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182ac) {
            ctx->pc = 0x118278u;
            goto label_118278;
        }
    }
    ctx->pc = 0x1182B4u;
    // 0x1182b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1182b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1182b8:
    // 0x1182b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1182b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1182bc:
    // 0x1182bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1182bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1182c0:
    // 0x1182c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1182c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1182c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1182c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1182c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1182c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1182cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1182ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1182d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1182d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1182d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1182D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1182D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1182D4u;
            // 0x1182d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1180FCu: goto label_1180fc;
            case 0x11810Cu: goto label_11810c;
            case 0x11817Cu: goto label_11817c;
            case 0x118180u: goto label_118180;
            case 0x118194u: goto label_118194;
            case 0x1181A4u: goto label_1181a4;
            case 0x1181B4u: goto label_1181b4;
            case 0x1181B8u: goto label_1181b8;
            case 0x118214u: goto label_118214;
            case 0x118234u: goto label_118234;
            case 0x11824Cu: goto label_11824c;
            case 0x11825Cu: goto label_11825c;
            case 0x118278u: goto label_118278;
            case 0x1182B8u: goto label_1182b8;
            case 0x1182BCu: goto label_1182bc;
            case 0x1182C0u: goto label_1182c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1182DCu;
}
