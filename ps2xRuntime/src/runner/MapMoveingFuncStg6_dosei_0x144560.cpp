#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFuncStg6_dosei
// Address: 0x144560 - 0x1445b4
void MapMoveingFuncStg6_dosei_0x144560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFuncStg6_dosei_0x144560");
#endif

    ctx->pc = 0x144560u;

    // 0x144560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144564: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x144564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x144568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14456c: 0x3c0346bb  lui         $v1, 0x46BB
    ctx->pc = 0x14456cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18107 << 16));
    // 0x144570: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x144570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144574: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x144574u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x144578: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x144578u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14457c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14457cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144580: 0xc4c20124  lwc1        $f2, 0x124($a2)
    ctx->pc = 0x144580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144584: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x144584u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x144588: 0xe4c10124  swc1        $f1, 0x124($a2)
    ctx->pc = 0x144588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    // 0x14458c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144590: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x144590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144594: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144598: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x144598u;
    {
        const bool branch_taken_0x144598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x144598) {
            ctx->pc = 0x1445A8u;
            goto label_1445a8;
        }
    }
    ctx->pc = 0x1445A0u;
    // 0x1445a0: 0xc053348  jal         func_14CD20
    ctx->pc = 0x1445A0u;
    SET_GPR_U32(ctx, 31, 0x1445A8u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1445A8u; }
        if (ctx->pc != 0x1445A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1445A8u; }
        if (ctx->pc != 0x1445A8u) { return; }
    }
    ctx->pc = 0x1445A8u;
label_1445a8:
    // 0x1445a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1445a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1445ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1445ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1445B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1445ACu;
            // 0x1445b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1445A8u: goto label_1445a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1445B4u;
}
