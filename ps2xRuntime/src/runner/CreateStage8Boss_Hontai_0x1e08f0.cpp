#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateStage8Boss_Hontai
// Address: 0x1e08f0 - 0x1e09fc
void CreateStage8Boss_Hontai_0x1e08f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateStage8Boss_Hontai_0x1e08f0");
#endif

    ctx->pc = 0x1e08f0u;

    // 0x1e08f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e08f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e08f4: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1e08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e08f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e08fc: 0xc060694  jal         func_181A50
    ctx->pc = 0x1E08FCu;
    SET_GPR_U32(ctx, 31, 0x1E0904u);
    ctx->pc = 0x1E0900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E08FCu;
            // 0x1e0900: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A50u;
    if (runtime->hasFunction(0x181A50u)) {
        auto targetFn = runtime->lookupFunction(0x181A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0904u; }
        if (ctx->pc != 0x1E0904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsAddr_0x181a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0904u; }
        if (ctx->pc != 0x1E0904u) { return; }
    }
    ctx->pc = 0x1E0904u;
    // 0x1e0904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0908: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x1e0908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e090c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1e090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1e0910: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1E0910u;
    SET_GPR_U32(ctx, 31, 0x1E0918u);
    ctx->pc = 0x1E0914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0910u;
            // 0x1e0914: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0918u; }
        if (ctx->pc != 0x1E0918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0918u; }
        if (ctx->pc != 0x1E0918u) { return; }
    }
    ctx->pc = 0x1E0918u;
    // 0x1e0918: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E0918u;
    SET_GPR_U32(ctx, 31, 0x1E0920u);
    ctx->pc = 0x1E091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0918u;
            // 0x1e091c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0920u; }
        if (ctx->pc != 0x1E0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0920u; }
        if (ctx->pc != 0x1E0920u) { return; }
    }
    ctx->pc = 0x1E0920u;
    // 0x1e0920: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e0924: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e0924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0928: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E0928u;
    SET_GPR_U32(ctx, 31, 0x1E0930u);
    ctx->pc = 0x1E092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0928u;
            // 0x1e092c: 0xac222da0  sw          $v0, 0x2DA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0930u; }
        if (ctx->pc != 0x1E0930u) { return; }
    }
    ctx->pc = 0x1E0930u;
    // 0x1e0930: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e0934: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e0934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e0938: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E0938u;
    SET_GPR_U32(ctx, 31, 0x1E0940u);
    ctx->pc = 0x1E093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0938u;
            // 0x1e093c: 0xac222da4  sw          $v0, 0x2DA4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0940u; }
        if (ctx->pc != 0x1E0940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0940u; }
        if (ctx->pc != 0x1E0940u) { return; }
    }
    ctx->pc = 0x1E0940u;
    // 0x1e0940: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e0944: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e0944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0948: 0x8c272da0  lw          $a3, 0x2DA0($at)
    ctx->pc = 0x1e0948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11680)));
    // 0x1e094c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0950: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e0954: 0x8c282da4  lw          $t0, 0x2DA4($at)
    ctx->pc = 0x1e0954u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11684)));
    // 0x1e0958: 0xc060614  jal         func_181850
    ctx->pc = 0x1E0958u;
    SET_GPR_U32(ctx, 31, 0x1E0960u);
    ctx->pc = 0x1E095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0958u;
            // 0x1e095c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0960u; }
        if (ctx->pc != 0x1E0960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0960u; }
        if (ctx->pc != 0x1E0960u) { return; }
    }
    ctx->pc = 0x1E0960u;
    // 0x1e0960: 0xc0503e4  jal         func_140F90
    ctx->pc = 0x1E0960u;
    SET_GPR_U32(ctx, 31, 0x1E0968u);
    ctx->pc = 0x1E0964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0960u;
            // 0x1e0964: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F90u;
    if (runtime->hasFunction(0x140F90u)) {
        auto targetFn = runtime->lookupFunction(0x140F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0968u; }
        if (ctx->pc != 0x1E0968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetPixelMemTbl512x512_0x140f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0968u; }
        if (ctx->pc != 0x1E0968u) { return; }
    }
    ctx->pc = 0x1E0968u;
    // 0x1e0968: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e096c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e0970: 0xc0503cc  jal         func_140F30
    ctx->pc = 0x1E0970u;
    SET_GPR_U32(ctx, 31, 0x1E0978u);
    ctx->pc = 0x1E0974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0970u;
            // 0x1e0974: 0xac222da0  sw          $v0, 0x2DA0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140F30u;
    if (runtime->hasFunction(0x140F30u)) {
        auto targetFn = runtime->lookupFunction(0x140F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0978u; }
        if (ctx->pc != 0x1E0978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetClutMemTbl512x512_0x140f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0978u; }
        if (ctx->pc != 0x1E0978u) { return; }
    }
    ctx->pc = 0x1E0978u;
    // 0x1e0978: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e097c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1e097cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e0980: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E0980u;
    SET_GPR_U32(ctx, 31, 0x1E0988u);
    ctx->pc = 0x1E0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0980u;
            // 0x1e0984: 0xac222da4  sw          $v0, 0x2DA4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0988u; }
        if (ctx->pc != 0x1E0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0988u; }
        if (ctx->pc != 0x1E0988u) { return; }
    }
    ctx->pc = 0x1E0988u;
    // 0x1e0988: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e098c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e098cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0990: 0x8c272da0  lw          $a3, 0x2DA0($at)
    ctx->pc = 0x1e0990u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11680)));
    // 0x1e0994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0998: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e0998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e099c: 0x8c282da4  lw          $t0, 0x2DA4($at)
    ctx->pc = 0x1e099cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 11684)));
    // 0x1e09a0: 0xc060614  jal         func_181850
    ctx->pc = 0x1E09A0u;
    SET_GPR_U32(ctx, 31, 0x1E09A8u);
    ctx->pc = 0x1E09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09A0u;
            // 0x1e09a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181850u;
    if (runtime->hasFunction(0x181850u)) {
        auto targetFn = runtime->lookupFunction(0x181850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09A8u; }
        if (ctx->pc != 0x1E09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTim2Es_0x181850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09A8u; }
        if (ctx->pc != 0x1E09A8u) { return; }
    }
    ctx->pc = 0x1E09A8u;
    // 0x1e09a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e09a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09ac: 0xc06060c  jal         func_181830
    ctx->pc = 0x1E09ACu;
    SET_GPR_U32(ctx, 31, 0x1E09B4u);
    ctx->pc = 0x1E09B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09ACu;
            // 0x1e09b0: 0x26050110  addiu       $a1, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181830u;
    if (runtime->hasFunction(0x181830u)) {
        auto targetFn = runtime->lookupFunction(0x181830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09B4u; }
        if (ctx->pc != 0x1E09B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHrchyEs_0x181830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09B4u; }
        if (ctx->pc != 0x1E09B4u) { return; }
    }
    ctx->pc = 0x1E09B4u;
    // 0x1e09b4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1e09b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e09b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e09c0: 0xc060604  jal         func_181810
    ctx->pc = 0x1E09C0u;
    SET_GPR_U32(ctx, 31, 0x1E09C8u);
    ctx->pc = 0x1E09C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09C0u;
            // 0x1e09c4: 0x24c6ab20  addiu       $a2, $a2, -0x54E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181810u;
    if (runtime->hasFunction(0x181810u)) {
        auto targetFn = runtime->lookupFunction(0x181810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09C8u; }
        if (ctx->pc != 0x1E09C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMicroEs_0x181810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09C8u; }
        if (ctx->pc != 0x1E09C8u) { return; }
    }
    ctx->pc = 0x1E09C8u;
    // 0x1e09c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e09c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e09ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e09d0: 0xc0605dc  jal         func_181770
    ctx->pc = 0x1E09D0u;
    SET_GPR_U32(ctx, 31, 0x1E09D8u);
    ctx->pc = 0x1E09D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09D0u;
            // 0x1e09d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09D8u; }
        if (ctx->pc != 0x1E09D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09D8u; }
        if (ctx->pc != 0x1E09D8u) { return; }
    }
    ctx->pc = 0x1E09D8u;
    // 0x1e09d8: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x1e09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1e09dc: 0xc046376  jal         func_118DD8
    ctx->pc = 0x1E09DCu;
    SET_GPR_U32(ctx, 31, 0x1E09E4u);
    ctx->pc = 0x1E09E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09DCu;
            // 0x1e09e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118DD8u;
    if (runtime->hasFunction(0x118DD8u)) {
        auto targetFn = runtime->lookupFunction(0x118DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09E4u; }
        if (ctx->pc != 0x1E09E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugShapeMasterChainSetting_0x118dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09E4u; }
        if (ctx->pc != 0x1E09E4u) { return; }
    }
    ctx->pc = 0x1E09E4u;
    // 0x1e09e4: 0xc0605cc  jal         func_181730
    ctx->pc = 0x1E09E4u;
    SET_GPR_U32(ctx, 31, 0x1E09ECu);
    ctx->pc = 0x1E09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09E4u;
            // 0x1e09e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181730u;
    if (runtime->hasFunction(0x181730u)) {
        auto targetFn = runtime->lookupFunction(0x181730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09ECu; }
        if (ctx->pc != 0x1E09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMicroEs_0x181730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E09ECu; }
        if (ctx->pc != 0x1E09ECu) { return; }
    }
    ctx->pc = 0x1E09ECu;
    // 0x1e09ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e09ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e09f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e09f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E09F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E09F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E09F4u;
            // 0x1e09f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E09FCu;
}
