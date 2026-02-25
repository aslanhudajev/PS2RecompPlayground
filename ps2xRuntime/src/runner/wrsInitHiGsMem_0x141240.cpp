#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsInitHiGsMem
// Address: 0x141240 - 0x14127c
void wrsInitHiGsMem_0x141240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsInitHiGsMem_0x141240");
#endif

    ctx->pc = 0x141240u;

    // 0x141240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141248: 0xc044104  jal         func_110410
    ctx->pc = 0x141248u;
    SET_GPR_U32(ctx, 31, 0x141250u);
    ctx->pc = 0x110410u;
    if (runtime->hasFunction(0x110410u)) {
        auto targetFn = runtime->lookupFunction(0x110410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141250u; }
        if (ctx->pc != 0x141250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsMemInit_0x110410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141250u; }
        if (ctx->pc != 0x141250u) { return; }
    }
    ctx->pc = 0x141250u;
    // 0x141250: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141250u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x141254: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x141254u;
    {
        const bool branch_taken_0x141254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141254u;
            // 0x141258: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141254) {
            ctx->pc = 0x141270u;
            goto label_141270;
        }
    }
    ctx->pc = 0x14125Cu;
    // 0x14125c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14125cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x141260: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x141260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x141264: 0x248402e0  addiu       $a0, $a0, 0x2E0
    ctx->pc = 0x141264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x141268: 0xc059e98  jal         func_167A60
    ctx->pc = 0x141268u;
    SET_GPR_U32(ctx, 31, 0x141270u);
    ctx->pc = 0x14126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x141268u;
            // 0x14126c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141270u; }
        if (ctx->pc != 0x141270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141270u; }
        if (ctx->pc != 0x141270u) { return; }
    }
    ctx->pc = 0x141270u;
label_141270:
    // 0x141270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141274: 0x3e00008  jr          $ra
    ctx->pc = 0x141274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141274u;
            // 0x141278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141270u: goto label_141270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14127Cu;
}
