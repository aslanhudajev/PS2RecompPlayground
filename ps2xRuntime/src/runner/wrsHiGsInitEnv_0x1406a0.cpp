#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsInitEnv
// Address: 0x1406a0 - 0x1408a4
void wrsHiGsInitEnv_0x1406a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsInitEnv_0x1406a0");
#endif

    ctx->pc = 0x1406a0u;

    // 0x1406a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1406a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1406a4: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x1406a8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1406a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1406ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1406acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1406b0: 0x25082210  addiu       $t0, $t0, 0x2210
    ctx->pc = 0x1406b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8720));
    // 0x1406b4: 0x344409ff  ori         $a0, $v0, 0x9FF
    ctx->pc = 0x1406b4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2559u)));
    // 0x1406b8: 0x79060000  lq          $a2, 0x0($t0)
    ctx->pc = 0x1406b8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1406bc: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1406c0: 0x79050010  lq          $a1, 0x10($t0)
    ctx->pc = 0x1406c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1406c4: 0x79030020  lq          $v1, 0x20($t0)
    ctx->pc = 0x1406c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x1406c8: 0x79020030  lq          $v0, 0x30($t0)
    ctx->pc = 0x1406c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1406cc: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1406ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x1406d0: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1406d0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1406d4: 0x7ce30020  sq          $v1, 0x20($a3)
    ctx->pc = 0x1406d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 3));
    // 0x1406d8: 0xc044800  jal         func_112000
    ctx->pc = 0x1406D8u;
    SET_GPR_U32(ctx, 31, 0x1406E0u);
    ctx->pc = 0x1406DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1406D8u;
            // 0x1406dc: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112000u;
    if (runtime->hasFunction(0x112000u)) {
        auto targetFn = runtime->lookupFunction(0x112000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406E0u; }
        if (ctx->pc != 0x1406E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvCreate_0x112000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1406E0u; }
        if (ctx->pc != 0x1406E0u) { return; }
    }
    ctx->pc = 0x1406E0u;
    // 0x1406e0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1406e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1406e4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1406e8: 0xac227680  sw          $v0, 0x7680($at)
    ctx->pc = 0x1406e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30336), GPR_U32(ctx, 2));
    // 0x1406ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1406ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1406f0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1406f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1406f4: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x1406f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x1406f8: 0xc0452ec  jal         func_114BB0
    ctx->pc = 0x1406F8u;
    SET_GPR_U32(ctx, 31, 0x140700u);
    ctx->pc = 0x1406FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1406F8u;
            // 0x1406fc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114BB0u;
    if (runtime->hasFunction(0x114BB0u)) {
        auto targetFn = runtime->lookupFunction(0x114BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140700u; }
        if (ctx->pc != 0x140700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegFogcol_0x114bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140700u; }
        if (ctx->pc != 0x140700u) { return; }
    }
    ctx->pc = 0x140700u;
    // 0x140700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140700u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140704: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140704u;
    {
        const bool branch_taken_0x140704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140704u;
            // 0x140708: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140704) {
            ctx->pc = 0x140720u;
            goto label_140720;
        }
    }
    ctx->pc = 0x14070Cu;
    // 0x14070c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14070cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140710: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140714: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140718: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140718u;
    SET_GPR_U32(ctx, 31, 0x140720u);
    ctx->pc = 0x14071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140718u;
            // 0x14071c: 0x240500db  addiu       $a1, $zero, 0xDB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140720u; }
        if (ctx->pc != 0x140720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140720u; }
        if (ctx->pc != 0x140720u) { return; }
    }
    ctx->pc = 0x140720u;
label_140720:
    // 0x140720: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140724: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x140724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x140728: 0xc045306  jal         func_114C18
    ctx->pc = 0x140728u;
    SET_GPR_U32(ctx, 31, 0x140730u);
    ctx->pc = 0x14072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140728u;
            // 0x14072c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114C18u;
    if (runtime->hasFunction(0x114C18u)) {
        auto targetFn = runtime->lookupFunction(0x114C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140730u; }
        if (ctx->pc != 0x140730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegPabe_0x114c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140730u; }
        if (ctx->pc != 0x140730u) { return; }
    }
    ctx->pc = 0x140730u;
    // 0x140730: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140730u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140734u;
    {
        const bool branch_taken_0x140734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140734u;
            // 0x140738: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140734) {
            ctx->pc = 0x140750u;
            goto label_140750;
        }
    }
    ctx->pc = 0x14073Cu;
    // 0x14073c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14073cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140740: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140744: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140748: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140748u;
    SET_GPR_U32(ctx, 31, 0x140750u);
    ctx->pc = 0x14074Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140748u;
            // 0x14074c: 0x240500dd  addiu       $a1, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140750u; }
        if (ctx->pc != 0x140750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140750u; }
        if (ctx->pc != 0x140750u) { return; }
    }
    ctx->pc = 0x140750u;
label_140750:
    // 0x140750: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140754: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x140758: 0xc045396  jal         func_114E58
    ctx->pc = 0x140758u;
    SET_GPR_U32(ctx, 31, 0x140760u);
    ctx->pc = 0x14075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140758u;
            // 0x14075c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114E58u;
    if (runtime->hasFunction(0x114E58u)) {
        auto targetFn = runtime->lookupFunction(0x114E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140760u; }
        if (ctx->pc != 0x140760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegPrmodecont_0x114e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140760u; }
        if (ctx->pc != 0x140760u) { return; }
    }
    ctx->pc = 0x140760u;
    // 0x140760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140760u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x140764u;
    {
        const bool branch_taken_0x140764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140764u;
            // 0x140768: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140764) {
            ctx->pc = 0x140780u;
            goto label_140780;
        }
    }
    ctx->pc = 0x14076Cu;
    // 0x14076c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140770: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140774: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140778: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140778u;
    SET_GPR_U32(ctx, 31, 0x140780u);
    ctx->pc = 0x14077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140778u;
            // 0x14077c: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140780u; }
        if (ctx->pc != 0x140780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140780u; }
        if (ctx->pc != 0x140780u) { return; }
    }
    ctx->pc = 0x140780u;
label_140780:
    // 0x140780: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x140780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x140784: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x140788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14078c: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x140790: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x140790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140794: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x140794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140798: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x140798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14079c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x14079cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1407a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407a4: 0xc045344  jal         func_114D10
    ctx->pc = 0x1407A4u;
    SET_GPR_U32(ctx, 31, 0x1407ACu);
    ctx->pc = 0x1407A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1407A4u;
            // 0x1407a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114D10u;
    if (runtime->hasFunction(0x114D10u)) {
        auto targetFn = runtime->lookupFunction(0x114D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407ACu; }
        if (ctx->pc != 0x1407ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegPrmode_0x114d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407ACu; }
        if (ctx->pc != 0x1407ACu) { return; }
    }
    ctx->pc = 0x1407ACu;
    // 0x1407ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1407acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1407b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1407B0u;
    {
        const bool branch_taken_0x1407b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1407B0u;
            // 0x1407b4: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407b0) {
            ctx->pc = 0x1407D0u;
            goto label_1407d0;
        }
    }
    ctx->pc = 0x1407B8u;
    // 0x1407b8: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1407b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1407bc: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1407bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1407c0: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x1407c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x1407c4: 0xc059e98  jal         func_167A60
    ctx->pc = 0x1407C4u;
    SET_GPR_U32(ctx, 31, 0x1407CCu);
    ctx->pc = 0x1407C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1407C4u;
            // 0x1407c8: 0x240500e2  addiu       $a1, $zero, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407CCu; }
        if (ctx->pc != 0x1407CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407CCu; }
        if (ctx->pc != 0x1407CCu) { return; }
    }
    ctx->pc = 0x1407CCu;
    // 0x1407cc: 0x0  nop
    ctx->pc = 0x1407ccu;
    // NOP
label_1407d0:
    // 0x1407d0: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1407d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1407d4: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x1407d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x1407d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1407d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1407dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1407dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1407e0: 0xc045324  jal         func_114C90
    ctx->pc = 0x1407E0u;
    SET_GPR_U32(ctx, 31, 0x1407E8u);
    ctx->pc = 0x1407E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1407E0u;
            // 0x1407e4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114C90u;
    if (runtime->hasFunction(0x114C90u)) {
        auto targetFn = runtime->lookupFunction(0x114C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407E8u; }
        if (ctx->pc != 0x1407E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegTexa_0x114c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1407E8u; }
        if (ctx->pc != 0x1407E8u) { return; }
    }
    ctx->pc = 0x1407E8u;
    // 0x1407e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1407e8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1407ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1407ECu;
    {
        const bool branch_taken_0x1407ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1407ECu;
            // 0x1407f0: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407ec) {
            ctx->pc = 0x140808u;
            goto label_140808;
        }
    }
    ctx->pc = 0x1407F4u;
    // 0x1407f4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1407f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1407f8: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x1407fc: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140800: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140800u;
    SET_GPR_U32(ctx, 31, 0x140808u);
    ctx->pc = 0x140804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140800u;
            // 0x140804: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140808u; }
        if (ctx->pc != 0x140808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140808u; }
        if (ctx->pc != 0x140808u) { return; }
    }
    ctx->pc = 0x140808u;
label_140808:
    // 0x140808: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14080c: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x140810: 0xc0452b6  jal         func_114AD8
    ctx->pc = 0x140810u;
    SET_GPR_U32(ctx, 31, 0x140818u);
    ctx->pc = 0x140814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140810u;
            // 0x140814: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114AD8u;
    if (runtime->hasFunction(0x114AD8u)) {
        auto targetFn = runtime->lookupFunction(0x114AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140818u; }
        if (ctx->pc != 0x140818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegDthe_0x114ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140818u; }
        if (ctx->pc != 0x140818u) { return; }
    }
    ctx->pc = 0x140818u;
    // 0x140818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140818u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x14081c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14081Cu;
    {
        const bool branch_taken_0x14081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14081Cu;
            // 0x140820: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14081c) {
            ctx->pc = 0x140838u;
            goto label_140838;
        }
    }
    ctx->pc = 0x140824u;
    // 0x140824: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140828: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x14082c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140830: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140830u;
    SET_GPR_U32(ctx, 31, 0x140838u);
    ctx->pc = 0x140834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140830u;
            // 0x140834: 0x240500e7  addiu       $a1, $zero, 0xE7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 231));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140838u; }
        if (ctx->pc != 0x140838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140838u; }
        if (ctx->pc != 0x140838u) { return; }
    }
    ctx->pc = 0x140838u;
label_140838:
    // 0x140838: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14083c: 0x8c247680  lw          $a0, 0x7680($at)
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
    // 0x140840: 0xc045200  jal         func_114800
    ctx->pc = 0x140840u;
    SET_GPR_U32(ctx, 31, 0x140848u);
    ctx->pc = 0x140844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140840u;
            // 0x140844: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (runtime->hasFunction(0x114800u)) {
        auto targetFn = runtime->lookupFunction(0x114800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140848u; }
        if (ctx->pc != 0x140848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvSetRegDimx_0x114800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140848u; }
        if (ctx->pc != 0x140848u) { return; }
    }
    ctx->pc = 0x140848u;
    // 0x140848: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140848u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x14084c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14084Cu;
    {
        const bool branch_taken_0x14084c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14084Cu;
            // 0x140850: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14084c) {
            ctx->pc = 0x140868u;
            goto label_140868;
        }
    }
    ctx->pc = 0x140854u;
    // 0x140854: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140858: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x14085c: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x14085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x140860: 0xc059e98  jal         func_167A60
    ctx->pc = 0x140860u;
    SET_GPR_U32(ctx, 31, 0x140868u);
    ctx->pc = 0x140864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140860u;
            // 0x140864: 0x240500ea  addiu       $a1, $zero, 0xEA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140868u; }
        if (ctx->pc != 0x140868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140868u; }
        if (ctx->pc != 0x140868u) { return; }
    }
    ctx->pc = 0x140868u;
label_140868:
    // 0x140868: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x14086c: 0xc0447c4  jal         func_111F10
    ctx->pc = 0x14086Cu;
    SET_GPR_U32(ctx, 31, 0x140874u);
    ctx->pc = 0x140870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14086Cu;
            // 0x140870: 0x8c247680  lw          $a0, 0x7680($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111F10u;
    if (runtime->hasFunction(0x111F10u)) {
        auto targetFn = runtime->lookupFunction(0x111F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140874u; }
        if (ctx->pc != 0x140874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvUpdate_0x111f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140874u; }
        if (ctx->pc != 0x140874u) { return; }
    }
    ctx->pc = 0x140874u;
    // 0x140874: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x140874u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140878: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140878u;
    {
        const bool branch_taken_0x140878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140878u;
            // 0x14087c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140878) {
            ctx->pc = 0x140898u;
            goto label_140898;
        }
    }
    ctx->pc = 0x140880u;
    // 0x140880: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140884: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140888: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x14088c: 0xc059e98  jal         func_167A60
    ctx->pc = 0x14088Cu;
    SET_GPR_U32(ctx, 31, 0x140894u);
    ctx->pc = 0x140890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14088Cu;
            // 0x140890: 0x240500ed  addiu       $a1, $zero, 0xED (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140894u; }
        if (ctx->pc != 0x140894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140894u; }
        if (ctx->pc != 0x140894u) { return; }
    }
    ctx->pc = 0x140894u;
    // 0x140894: 0x0  nop
    ctx->pc = 0x140894u;
    // NOP
label_140898:
    // 0x140898: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14089c: 0x3e00008  jr          $ra
    ctx->pc = 0x14089Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1408A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14089Cu;
            // 0x1408a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140720u: goto label_140720;
            case 0x140750u: goto label_140750;
            case 0x140780u: goto label_140780;
            case 0x1407D0u: goto label_1407d0;
            case 0x140808u: goto label_140808;
            case 0x140838u: goto label_140838;
            case 0x140868u: goto label_140868;
            case 0x140898u: goto label_140898;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1408A4u;
}
