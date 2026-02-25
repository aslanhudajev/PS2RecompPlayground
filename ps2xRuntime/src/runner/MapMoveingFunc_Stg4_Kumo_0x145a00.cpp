#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg4_Kumo
// Address: 0x145a00 - 0x145a54
void MapMoveingFunc_Stg4_Kumo_0x145a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg4_Kumo_0x145a00");
#endif

    ctx->pc = 0x145a00u;

    // 0x145a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145a04: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x145a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x145a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145a0c: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x145a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x145a10: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145a14: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x145a14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145a1c: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x145a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145a20: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x145a20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x145a24: 0xe4c10124  swc1        $f1, 0x124($a2)
    ctx->pc = 0x145a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x145a28: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x145a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x145a2c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x145a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145a34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x145A34u;
    {
        const bool branch_taken_0x145a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145a34) {
            ctx->pc = 0x145A48u;
            goto label_145a48;
        }
    }
    ctx->pc = 0x145A3Cu;
    // 0x145a3c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x145A3Cu;
    SET_GPR_U32(ctx, 31, 0x145A44u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A44u; }
        if (ctx->pc != 0x145A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A44u; }
        if (ctx->pc != 0x145A44u) { return; }
    }
    ctx->pc = 0x145A44u;
    // 0x145a44: 0x0  nop
    ctx->pc = 0x145a44u;
    // NOP
label_145a48:
    // 0x145a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x145A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A4Cu;
            // 0x145a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145A48u: goto label_145a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145A54u;
}
