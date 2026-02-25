#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vu1ResidentTextureMakePacket
// Address: 0x117338 - 0x117478
void Vu1ResidentTextureMakePacket_0x117338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vu1ResidentTextureMakePacket_0x117338");
#endif

    ctx->pc = 0x117338u;

    // 0x117338: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x117338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11733c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x117340: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x117340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x117344: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x117344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x117348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11734c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x11734cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117350: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x117350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x117354: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x117354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x117358: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x117358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11735c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x117360: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x117360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x117364: 0x12c00038  beqz        $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x117364u;
    {
        const bool branch_taken_0x117364 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x117368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117364u;
            // 0x117368: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117364) {
            ctx->pc = 0x117448u;
            goto label_117448;
        }
    }
    ctx->pc = 0x11736Cu;
    // 0x11736c: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x11736Cu;
    SET_GPR_U32(ctx, 31, 0x117374u);
    ctx->pc = 0x117370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11736Cu;
            // 0x117370: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117374u; }
        if (ctx->pc != 0x117374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117374u; }
        if (ctx->pc != 0x117374u) { return; }
    }
    ctx->pc = 0x117374u;
    // 0x117374: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x117374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x117378: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x117378u;
    {
        const bool branch_taken_0x117378 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117378u;
            // 0x11737c: 0x3c170022  lui         $s7, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117378) {
            ctx->pc = 0x117440u;
            goto label_117440;
        }
    }
    ctx->pc = 0x117380u;
    // 0x117380: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x117380u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117384: 0x0  nop
    ctx->pc = 0x117384u;
    // NOP
label_117388:
    // 0x117388: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x117388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x11738c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117390: 0xc0471c6  jal         func_11C718
    ctx->pc = 0x117390u;
    SET_GPR_U32(ctx, 31, 0x117398u);
    ctx->pc = 0x117394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117390u;
            // 0x117394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C718u;
    if (runtime->hasFunction(0x11C718u)) {
        auto targetFn = runtime->lookupFunction(0x11C718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117398u; }
        if (ctx->pc != 0x117398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetData_0x11c718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117398u; }
        if (ctx->pc != 0x117398u) { return; }
    }
    ctx->pc = 0x117398u;
    // 0x117398: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11739c: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11739Cu;
    {
        const bool branch_taken_0x11739c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1173A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11739Cu;
            // 0x1173a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11739c) {
            ctx->pc = 0x1173B4u;
            goto label_1173b4;
        }
    }
    ctx->pc = 0x1173A4u;
    // 0x1173a4: 0xc045ad6  jal         func_116B58
    ctx->pc = 0x1173A4u;
    SET_GPR_U32(ctx, 31, 0x1173ACu);
    ctx->pc = 0x1173A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173A4u;
            // 0x1173a8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116B58u;
    if (runtime->hasFunction(0x116B58u)) {
        auto targetFn = runtime->lookupFunction(0x116B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173ACu; }
        if (ctx->pc != 0x1173ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tex2d_err_0x116b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173ACu; }
        if (ctx->pc != 0x1173ACu) { return; }
    }
    ctx->pc = 0x1173ACu;
    // 0x1173ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1173ACu;
    {
        const bool branch_taken_0x1173ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173ACu;
            // 0x1173b0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173ac) {
            ctx->pc = 0x117450u;
            goto label_117450;
        }
    }
    ctx->pc = 0x1173B4u;
label_1173b4:
    // 0x1173b4: 0xc0471d2  jal         func_11C748
    ctx->pc = 0x1173B4u;
    SET_GPR_U32(ctx, 31, 0x1173BCu);
    ctx->pc = 0x1173B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173B4u;
            // 0x1173b8: 0x2159021  addu        $s2, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C748u;
    if (runtime->hasFunction(0x11C748u)) {
        auto targetFn = runtime->lookupFunction(0x11C748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173BCu; }
        if (ctx->pc != 0x1173BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetTexel_0x11c748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173BCu; }
        if (ctx->pc != 0x1173BCu) { return; }
    }
    ctx->pc = 0x1173BCu;
    // 0x1173bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1173bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c0: 0xc0471d4  jal         func_11C750
    ctx->pc = 0x1173C0u;
    SET_GPR_U32(ctx, 31, 0x1173C8u);
    ctx->pc = 0x1173C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173C0u;
            // 0x1173c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C750u;
    if (runtime->hasFunction(0x11C750u)) {
        auto targetFn = runtime->lookupFunction(0x11C750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173C8u; }
        if (ctx->pc != 0x1173C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetClut_0x11c750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173C8u; }
        if (ctx->pc != 0x1173C8u) { return; }
    }
    ctx->pc = 0x1173C8u;
    // 0x1173c8: 0xc043cd0  jal         func_10F340
    ctx->pc = 0x1173C8u;
    SET_GPR_U32(ctx, 31, 0x1173D0u);
    ctx->pc = 0x1173CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173C8u;
            // 0x1173cc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F340u;
    if (runtime->hasFunction(0x10F340u)) {
        auto targetFn = runtime->lookupFunction(0x10F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173D0u; }
        if (ctx->pc != 0x1173D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_WaitMicro_0x10f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173D0u; }
        if (ctx->pc != 0x1173D0u) { return; }
    }
    ctx->pc = 0x1173D0u;
    // 0x1173d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1173d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173d4: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1173D4u;
    SET_GPR_U32(ctx, 31, 0x1173DCu);
    ctx->pc = 0x1173D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173D4u;
            // 0x1173d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173DCu; }
        if (ctx->pc != 0x1173DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173DCu; }
        if (ctx->pc != 0x1173DCu) { return; }
    }
    ctx->pc = 0x1173DCu;
    // 0x1173dc: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x1173dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x1173e0: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1173E0u;
    SET_GPR_U32(ctx, 31, 0x1173E8u);
    ctx->pc = 0x1173E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173E0u;
            // 0x1173e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173E8u; }
        if (ctx->pc != 0x1173E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173E8u; }
        if (ctx->pc != 0x1173E8u) { return; }
    }
    ctx->pc = 0x1173E8u;
    // 0x1173e8: 0x8e4500c8  lw          $a1, 0xC8($s2)
    ctx->pc = 0x1173e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x1173ec: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x1173ECu;
    SET_GPR_U32(ctx, 31, 0x1173F4u);
    ctx->pc = 0x1173F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1173ECu;
            // 0x1173f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173F4u; }
        if (ctx->pc != 0x1173F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1173F4u; }
        if (ctx->pc != 0x1173F4u) { return; }
    }
    ctx->pc = 0x1173F4u;
    // 0x1173f4: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x1173f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x1173f8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1173F8u;
    {
        const bool branch_taken_0x1173f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1173FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1173F8u;
            // 0x1173fc: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1173f8) {
            ctx->pc = 0x117420u;
            goto label_117420;
        }
    }
    ctx->pc = 0x117400u;
    // 0x117400: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x117400u;
    SET_GPR_U32(ctx, 31, 0x117408u);
    ctx->pc = 0x117404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117400u;
            // 0x117404: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117408u; }
        if (ctx->pc != 0x117408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117408u; }
        if (ctx->pc != 0x117408u) { return; }
    }
    ctx->pc = 0x117408u;
    // 0x117408: 0x264400b0  addiu       $a0, $s2, 0xB0
    ctx->pc = 0x117408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x11740c: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x11740Cu;
    SET_GPR_U32(ctx, 31, 0x117414u);
    ctx->pc = 0x117410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11740Cu;
            // 0x117410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117414u; }
        if (ctx->pc != 0x117414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117414u; }
        if (ctx->pc != 0x117414u) { return; }
    }
    ctx->pc = 0x117414u;
    // 0x117414: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x117418: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x117418u;
    SET_GPR_U32(ctx, 31, 0x117420u);
    ctx->pc = 0x11741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117418u;
            // 0x11741c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117420u; }
        if (ctx->pc != 0x117420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117420u; }
        if (ctx->pc != 0x117420u) { return; }
    }
    ctx->pc = 0x117420u;
label_117420:
    // 0x117420: 0x26e4e460  addiu       $a0, $s7, -0x1BA0
    ctx->pc = 0x117420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960224));
    // 0x117424: 0xc043fc8  jal         func_10FF20
    ctx->pc = 0x117424u;
    SET_GPR_U32(ctx, 31, 0x11742Cu);
    ctx->pc = 0x117428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117424u;
            // 0x117428: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF20u;
    if (runtime->hasFunction(0x10FF20u)) {
        auto targetFn = runtime->lookupFunction(0x10FF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11742Cu; }
        if (ctx->pc != 0x11742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_LoadGS_0x10ff20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11742Cu; }
        if (ctx->pc != 0x11742Cu) { return; }
    }
    ctx->pc = 0x11742Cu;
    // 0x11742c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11742cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x117430: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x117430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x117434: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x117434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x117438: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x117438u;
    {
        const bool branch_taken_0x117438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117438u;
            // 0x11743c: 0x26b500e0  addiu       $s5, $s5, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117438) {
            ctx->pc = 0x117388u;
            goto label_117388;
        }
    }
    ctx->pc = 0x117440u;
label_117440:
    // 0x117440: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x117440u;
    SET_GPR_U32(ctx, 31, 0x117448u);
    ctx->pc = 0x117444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117440u;
            // 0x117444: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117448u; }
        if (ctx->pc != 0x117448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117448u; }
        if (ctx->pc != 0x117448u) { return; }
    }
    ctx->pc = 0x117448u;
label_117448:
    // 0x117448: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11744c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11744cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_117450:
    // 0x117450: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x117450u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117454: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x117454u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117458: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x117458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11745c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11745cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117460: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x117460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117464: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117468: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11746c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11746cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117470: 0x3e00008  jr          $ra
    ctx->pc = 0x117470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117470u;
            // 0x117474: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117388u: goto label_117388;
            case 0x1173B4u: goto label_1173b4;
            case 0x117420u: goto label_117420;
            case 0x117440u: goto label_117440;
            case 0x117448u: goto label_117448;
            case 0x117450u: goto label_117450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117478u;
}
