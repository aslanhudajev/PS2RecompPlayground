#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4SORA
// Address: 0x1459b0 - 0x145a00
void MapMoveingFunc_Stg4SORA_0x1459b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4SORA_0x1459b0");
#endif

    ctx->pc = 0x1459b0u;

    // 0x1459b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1459b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1459b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1459b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1459b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1459b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1459bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1459bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1459c0: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1459c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1459c4: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1459C4u;
    SET_GPR_U32(ctx, 31, 0x1459CCu);
    ctx->pc = 0x1459C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459C4u;
            // 0x1459c8: 0xdc259570  ld          $a1, -0x6A90($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294940016)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459CCu; }
        if (ctx->pc != 0x1459CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459CCu; }
        if (ctx->pc != 0x1459CCu) { return; }
    }
    ctx->pc = 0x1459CCu;
    // 0x1459cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1459ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459d0: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1459D0u;
    SET_GPR_U32(ctx, 31, 0x1459D8u);
    ctx->pc = 0x1459D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459D0u;
            // 0x1459d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D8u; }
        if (ctx->pc != 0x1459D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D8u; }
        if (ctx->pc != 0x1459D8u) { return; }
    }
    ctx->pc = 0x1459D8u;
    // 0x1459d8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1459d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1459dc: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x1459dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x1459e0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x1459e0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
    // 0x1459e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1459e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1459e8: 0x0  nop
    ctx->pc = 0x1459e8u;
    // NOP
    // 0x1459ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1459ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1459f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1459f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1459f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1459f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1459f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1459F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1459F8u;
            // 0x1459fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145A00u;
}
