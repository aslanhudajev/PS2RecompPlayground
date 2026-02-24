#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufGetTag
// Address: 0x11aa10 - 0x11aa74
void voBufGetTag_0x11aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufGetTag_0x11aa10");
#endif

    ctx->pc = 0x11aa10u;

    // 0x11aa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11aa14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aa18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aa1c: 0xc046a80  jal         func_11AA00
    ctx->pc = 0x11AA1Cu;
    SET_GPR_U32(ctx, 31, 0x11AA24u);
    ctx->pc = 0x11AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA1Cu;
            // 0x11aa20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AA00u;
    if (runtime->hasFunction(0x11AA00u)) {
        auto targetFn = runtime->lookupFunction(0x11AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA24u; }
        if (ctx->pc != 0x11AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufIsEmpty_0x11aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AA24u; }
        if (ctx->pc != 0x11AA24u) { return; }
    }
    ctx->pc = 0x11AA24u;
    // 0x11aa24: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11AA24u;
    {
        const bool branch_taken_0x11aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa24) {
            ctx->pc = 0x11AA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA24u;
            // 0x11aa28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AA64u;
            goto label_11aa64;
        }
    }
    ctx->pc = 0x11AA2Cu;
    // 0x11aa2c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x11aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11aa30: 0x3c06000a  lui         $a2, 0xA
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)10 << 16));
    // 0x11aa34: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11aa38: 0x34c6af40  ori         $a2, $a2, 0xAF40
    ctx->pc = 0x11aa38u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)44864u)));
    // 0x11aa3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11aa40: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11aa44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11aa48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11AA48u;
    {
        const bool branch_taken_0x11aa48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11aa48) {
            ctx->pc = 0x11AA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA48u;
            // 0x11aa4c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AA50u;
            goto label_11aa50;
        }
    }
    ctx->pc = 0x11AA50u;
label_11aa50:
    // 0x11aa50: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x11aa50u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11aa54: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11aa58: 0x1010  mfhi        $v0
    ctx->pc = 0x11aa58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x11aa5c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x11aa5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11aa60: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_11aa64:
    // 0x11aa64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA6Cu;
            // 0x11aa70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11AA50u: goto label_11aa50;
            case 0x11AA64u: goto label_11aa64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11AA74u;
}
