#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Dekatama_rot_l
// Address: 0x194bb0 - 0x194c2c
void EnemyShotCreate_Dekatama_rot_l_0x194bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Dekatama_rot_l_0x194bb0");
#endif

    ctx->pc = 0x194bb0u;

    // 0x194bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x194bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bc8: 0xc04e072  jal         func_1381C8
    ctx->pc = 0x194BC8u;
    SET_GPR_U32(ctx, 31, 0x194BD0u);
    ctx->pc = 0x194BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194BC8u;
            // 0x194bcc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1381C8u;
    if (runtime->hasFunction(0x1381C8u)) {
        auto targetFn = runtime->lookupFunction(0x1381C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BD0u; }
        if (ctx->pc != 0x194BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        abs_0x1381c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194BD0u; }
        if (ctx->pc != 0x194BD0u) { return; }
    }
    ctx->pc = 0x194BD0u;
    // 0x194bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x194bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194bd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x194bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x194bd8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x194bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x194bdc: 0x24630420  addiu       $v1, $v1, 0x420
    ctx->pc = 0x194bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1056));
    // 0x194be0: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x194be0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x194be4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194be8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x194be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x194bec: 0x3010  mfhi        $a2
    ctx->pc = 0x194becu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x194bf0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x194bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x194bf4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x194bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x194bf8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x194bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x194bfc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x194bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x194c00: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x194c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x194c04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x194c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194c0c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x194c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x194c10: 0xc065674  jal         func_1959D0
    ctx->pc = 0x194C10u;
    SET_GPR_U32(ctx, 31, 0x194C18u);
    ctx->pc = 0x194C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194C10u;
            // 0x194c14: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C18u; }
        if (ctx->pc != 0x194C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194C18u; }
        if (ctx->pc != 0x194C18u) { return; }
    }
    ctx->pc = 0x194C18u;
    // 0x194c18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194c1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194c20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194c20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194c24: 0x3e00008  jr          $ra
    ctx->pc = 0x194C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194C24u;
            // 0x194c28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194C2Cu;
}
