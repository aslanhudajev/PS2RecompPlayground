#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufBeginPut
// Address: 0x189ed0 - 0x189fc8
void viBufBeginPut_0x189ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufBeginPut_0x189ed0");
#endif

    ctx->pc = 0x189ed0u;

    // 0x189ed0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189ed4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x189ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x189ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x189ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189ee0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x189ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189ee8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x189ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189ef0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x189ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189ef8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x189ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189efc: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x189efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x189f00: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x189F00u;
    SET_GPR_U32(ctx, 31, 0x189F08u);
    ctx->pc = 0x189F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189F00u;
            // 0x189f04: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F08u; }
        if (ctx->pc != 0x189F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189F08u; }
        if (ctx->pc != 0x189F08u) { return; }
    }
    ctx->pc = 0x189F08u;
    // 0x189f08: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x189f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x189f0c: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x189f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x189f10: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x189f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x189f14: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x189f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x189f18: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x189f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x189f1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189f20: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x189f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x189f24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x189f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x189f28: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x189f28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189f2c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x189f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x189f30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189f34: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x189f38: 0x2810  mfhi        $a1
    ctx->pc = 0x189f38u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x189f3c: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x189f40: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189f44: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x189f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189f48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x189F48u;
    {
        const bool branch_taken_0x189f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f48) {
            ctx->pc = 0x189F70u;
            goto label_189f70;
        }
    }
    ctx->pc = 0x189F50u;
    // 0x189f50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189f54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189f58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x189f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x189f5c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x189f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x189f60: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x189f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x189f64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x189F64u;
    {
        const bool branch_taken_0x189f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F64u;
            // 0x189f68: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f64) {
            ctx->pc = 0x189FA0u;
            goto label_189fa0;
        }
    }
    ctx->pc = 0x189F6Cu;
    // 0x189f6c: 0x0  nop
    ctx->pc = 0x189f6cu;
    // NOP
label_189f70:
    // 0x189f70: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189f74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x189f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189f78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x189f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x189f7c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x189f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x189f80: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189f84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x189f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x189f88: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x189f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189f8c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x189f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x189f90: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x189f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x189f94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x189f98: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x189f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189f9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x189f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_189fa0:
    // 0x189fa0: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x189FA0u;
    SET_GPR_U32(ctx, 31, 0x189FA8u);
    ctx->pc = 0x189FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189FA0u;
            // 0x189fa4: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FA8u; }
        if (ctx->pc != 0x189FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189FA8u; }
        if (ctx->pc != 0x189FA8u) { return; }
    }
    ctx->pc = 0x189FA8u;
    // 0x189fa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x189fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189fac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x189FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189FC0u;
            // 0x189fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189F70u: goto label_189f70;
            case 0x189FA0u: goto label_189fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189FC8u;
}
