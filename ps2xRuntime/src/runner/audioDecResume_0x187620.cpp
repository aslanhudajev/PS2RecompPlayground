#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecResume
// Address: 0x187620 - 0x187688
void audioDecResume_0x187620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecResume_0x187620");
#endif

    ctx->pc = 0x187620u;

    // 0x187620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18762c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18762cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187630: 0xc061ba8  jal         func_186EA0
    ctx->pc = 0x187630u;
    SET_GPR_U32(ctx, 31, 0x187638u);
    ctx->pc = 0x187634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187630u;
            // 0x187634: 0x24047fff  addiu       $a0, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186EA0u;
    if (runtime->hasFunction(0x186EA0u)) {
        auto targetFn = runtime->lookupFunction(0x186EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187638u; }
        if (ctx->pc != 0x187638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        changeInputVolume_0x186ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187638u; }
        if (ctx->pc != 0x187638u) { return; }
    }
    ctx->pc = 0x187638u;
    // 0x187638: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x187638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18763c: 0x8e080044  lw          $t0, 0x44($s0)
    ctx->pc = 0x18763cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x187640: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187640u;
    {
        const bool branch_taken_0x187640 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x187644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187640u;
            // 0x187644: 0x31283  sra         $v0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187640) {
            ctx->pc = 0x187650u;
            goto label_187650;
        }
    }
    ctx->pc = 0x187648u;
    // 0x187648: 0x246203ff  addiu       $v0, $v1, 0x3FF
    ctx->pc = 0x187648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
    // 0x18764c: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x18764cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_187650:
    // 0x187650: 0x24a80  sll         $t1, $v0, 10
    ctx->pc = 0x187650u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x187654: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187658: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x187658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18765c: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x18765cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32992u)));
    // 0x187660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187664: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x187664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x187668: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x187668u;
    SET_GPR_U32(ctx, 31, 0x187670u);
    ctx->pc = 0x18766Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187668u;
            // 0x18766c: 0x1025021  addu        $t2, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187670u; }
        if (ctx->pc != 0x187670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187670u; }
        if (ctx->pc != 0x187670u) { return; }
    }
    ctx->pc = 0x187670u;
    // 0x187670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187674: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x187674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x187678: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18767c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18767cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187680: 0x3e00008  jr          $ra
    ctx->pc = 0x187680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187680u;
            // 0x187684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187650u: goto label_187650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187688u;
}
