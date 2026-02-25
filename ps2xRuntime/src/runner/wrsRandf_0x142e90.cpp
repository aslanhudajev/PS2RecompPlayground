#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRandf
// Address: 0x142e90 - 0x142ecc
void wrsRandf_0x142e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRandf_0x142e90");
#endif

    ctx->pc = 0x142e90u;

    // 0x142e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142e98: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x142E98u;
    SET_GPR_U32(ctx, 31, 0x142EA0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EA0u; }
        if (ctx->pc != 0x142EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142EA0u; }
        if (ctx->pc != 0x142EA0u) { return; }
    }
    ctx->pc = 0x142EA0u;
    // 0x142ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142ea4: 0x0  nop
    ctx->pc = 0x142ea4u;
    // NOP
    // 0x142ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x142ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x142eac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x142eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x142eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142eb4: 0x0  nop
    ctx->pc = 0x142eb4u;
    // NOP
    // 0x142eb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x142eb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x142ebc: 0x0  nop
    ctx->pc = 0x142ebcu;
    // NOP
    // 0x142ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x142EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142EC4u;
            // 0x142ec8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142ECCu;
}
