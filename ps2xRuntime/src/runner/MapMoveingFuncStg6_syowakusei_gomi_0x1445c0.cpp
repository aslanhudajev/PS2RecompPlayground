#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg6_syowakusei_gomi
// Address: 0x1445c0 - 0x144614
void MapMoveingFuncStg6_syowakusei_gomi_0x1445c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg6_syowakusei_gomi_0x1445c0");
#endif

    ctx->pc = 0x1445c0u;

    // 0x1445c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1445c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1445c4: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1445c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1445c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1445cc: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1445ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1445d0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1445d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1445d4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1445d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1445d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1445d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1445dc: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x1445dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1445e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1445e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1445e4: 0xe4c10124  swc1        $f1, 0x124($a2)
    ctx->pc = 0x1445e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x1445e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1445e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1445ec: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1445ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1445f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1445f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1445f4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1445F4u;
    {
        const bool branch_taken_0x1445f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1445f4) {
            ctx->pc = 0x144608u;
            goto label_144608;
        }
    }
    ctx->pc = 0x1445FCu;
    // 0x1445fc: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1445FCu;
    SET_GPR_U32(ctx, 31, 0x144604u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144604u; }
        if (ctx->pc != 0x144604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144604u; }
        if (ctx->pc != 0x144604u) { return; }
    }
    ctx->pc = 0x144604u;
    // 0x144604: 0x0  nop
    ctx->pc = 0x144604u;
    // NOP
label_144608:
    // 0x144608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14460c: 0x3e00008  jr          $ra
    ctx->pc = 0x14460Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14460Cu;
            // 0x144610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144608u: goto label_144608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144614u;
}
