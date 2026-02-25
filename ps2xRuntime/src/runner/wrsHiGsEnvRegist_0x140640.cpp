#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsHiGsEnvRegist
// Address: 0x140640 - 0x140684
void wrsHiGsEnvRegist_0x140640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsHiGsEnvRegist_0x140640");
#endif

    ctx->pc = 0x140640u;

    // 0x140640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140644: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14064c: 0xc0446ae  jal         func_111AB8
    ctx->pc = 0x14064Cu;
    SET_GPR_U32(ctx, 31, 0x140654u);
    ctx->pc = 0x140650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14064Cu;
            // 0x140650: 0x8c247680  lw          $a0, 0x7680($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111AB8u;
    if (runtime->hasFunction(0x111AB8u)) {
        auto targetFn = runtime->lookupFunction(0x111AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140654u; }
        if (ctx->pc != 0x140654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsEnvRegist_0x111ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140654u; }
        if (ctx->pc != 0x140654u) { return; }
    }
    ctx->pc = 0x140654u;
    // 0x140654: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x140654u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x140658: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140658u;
    {
        const bool branch_taken_0x140658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140658u;
            // 0x14065c: 0x3c010021  lui         $at, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140658) {
            ctx->pc = 0x140678u;
            goto label_140678;
        }
    }
    ctx->pc = 0x140660u;
    // 0x140660: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x140664: 0x8c26f840  lw          $a2, -0x7C0($at)
    ctx->pc = 0x140664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965312)));
    // 0x140668: 0x248402d8  addiu       $a0, $a0, 0x2D8
    ctx->pc = 0x140668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 728));
    // 0x14066c: 0xc059e98  jal         func_167A60
    ctx->pc = 0x14066Cu;
    SET_GPR_U32(ctx, 31, 0x140674u);
    ctx->pc = 0x140670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14066Cu;
            // 0x140670: 0x240500fb  addiu       $a1, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167A60u;
    if (runtime->hasFunction(0x167A60u)) {
        auto targetFn = runtime->lookupFunction(0x167A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140674u; }
        if (ctx->pc != 0x140674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        error_handling_0x167a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140674u; }
        if (ctx->pc != 0x140674u) { return; }
    }
    ctx->pc = 0x140674u;
    // 0x140674: 0x0  nop
    ctx->pc = 0x140674u;
    // NOP
label_140678:
    // 0x140678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14067c: 0x3e00008  jr          $ra
    ctx->pc = 0x14067Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14067Cu;
            // 0x140680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x140678u: goto label_140678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140684u;
}
