#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: voBufIncCount
// Address: 0x11a948 - 0x11a9b8
void voBufIncCount_0x11a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("voBufIncCount_0x11a948");
#endif

    ctx->pc = 0x11a948u;

    // 0x11a948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a954: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x11A954u;
    SET_GPR_U32(ctx, 31, 0x11A95Cu);
    ctx->pc = 0x11A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A954u;
            // 0x11a958: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
        if (ctx->pc != 0x11A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
        if (ctx->pc != 0x11A95Cu) { return; }
    }
    ctx->pc = 0x11A95Cu;
    // 0x11a95c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a960: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x11a960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x11a964: 0x3442af40  ori         $v0, $v0, 0xAF40
    ctx->pc = 0x11a964u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)44864u)));
    // 0x11a968: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11a96c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x11a96cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11a970: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11a970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a974: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11a974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11a978: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11a978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x11a97c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11a980: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x11a980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11a984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a988: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x11a988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x11a98c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11A98Cu;
    {
        const bool branch_taken_0x11a98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a98c) {
            ctx->pc = 0x11A990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11A98Cu;
            // 0x11a990: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A994u;
            goto label_11a994;
        }
    }
    ctx->pc = 0x11A994u;
label_11a994:
    // 0x11a994: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a99c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11a9a0: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x11a9a0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x11a9a4: 0x1810  mfhi        $v1
    ctx->pc = 0x11a9a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11a9a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x11a9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a9b0: 0x8045400  j           func_115000
    ctx->pc = 0x11A9B0u;
    ctx->pc = 0x11A9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9B0u;
            // 0x11a9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11A9B8u;
}
