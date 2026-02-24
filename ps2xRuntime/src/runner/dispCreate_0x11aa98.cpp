#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dispCreate
// Address: 0x11aa98 - 0x11ad04
void dispCreate_0x11aa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dispCreate_0x11aa98");
#endif

    ctx->pc = 0x11aa98u;

    // 0x11aa98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11aa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11aa9c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x11aa9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11aaa4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x11aaa4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaa8: 0x2546001f  addiu       $a2, $t2, 0x1F
    ctx->pc = 0x11aaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x11aaac: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x11aaacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11aab0: 0x246282a  slt         $a1, $s2, $a2
    ctx->pc = 0x11aab0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11aab4: 0x2528003f  addiu       $t0, $t1, 0x3F
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x11aab8: 0x2542003e  addiu       $v0, $t2, 0x3E
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 62));
    // 0x11aabc: 0x248182a  slt         $v1, $s2, $t0
    ctx->pc = 0x11aabcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x11aac0: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x11aac0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x11aac4: 0x2527007e  addiu       $a3, $t1, 0x7E
    ctx->pc = 0x11aac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 126));
    // 0x11aac8: 0x103380b  movn        $a3, $t0, $v1
    ctx->pc = 0x11aac8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x11aacc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x11aaccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x11aad0: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11aad4: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    // 0x11aad8: 0xaf80843c  sw          $zero, -0x7BC4($gp)
    ctx->pc = 0x11aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935612), GPR_U32(ctx, 0));
    // 0x11aadc: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x11aadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11aae0: 0xaf808440  sw          $zero, -0x7BC0($gp)
    ctx->pc = 0x11aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 0));
    // 0x11aae4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11aae8: 0xaf808444  sw          $zero, -0x7BBC($gp)
    ctx->pc = 0x11aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 0));
    // 0x11aaec: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11aaf0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11aaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aaf8: 0xaf808448  sw          $zero, -0x7BB8($gp)
    ctx->pc = 0x11aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 0));
    // 0x11aafc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11aafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab00: 0x8f8284bc  lw          $v0, -0x7B44($gp)
    ctx->pc = 0x11ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab04: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
    // 0x11ab08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11ab0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11ab14: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x11ab14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11ab18: 0xaf80844c  sw          $zero, -0x7BB4($gp)
    ctx->pc = 0x11ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 0));
    // 0x11ab1c: 0xae27002c  sw          $a3, 0x2C($s1)
    ctx->pc = 0x11ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 7));
    // 0x11ab20: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x11ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x11ab24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x11ab24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ab28: 0xae290030  sw          $t1, 0x30($s1)
    ctx->pc = 0x11ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 9));
    // 0x11ab2c: 0xc04314a  jal         func_10C528
    ctx->pc = 0x11AB2Cu;
    SET_GPR_U32(ctx, 31, 0x11AB34u);
    ctx->pc = 0x11AB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB2Cu;
            // 0x11ab30: 0xae2a0034  sw          $t2, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C528u;
    if (runtime->hasFunction(0x10C528u)) {
        auto targetFn = runtime->lookupFunction(0x10C528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB34u; }
        if (ctx->pc != 0x11AB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x10c528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB34u; }
        if (ctx->pc != 0x11AB34u) { return; }
    }
    ctx->pc = 0x11AB34u;
    // 0x11ab34: 0x8f8384bc  lw          $v1, -0x7B44($gp)
    ctx->pc = 0x11ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab38: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x11ab3c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x11ab3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11ab40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab44: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x11ab44u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x11ab48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ab48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab4c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x11ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x11ab50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ab50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab54: 0xc0431ac  jal         func_10C6B0
    ctx->pc = 0x11AB54u;
    SET_GPR_U32(ctx, 31, 0x11AB5Cu);
    ctx->pc = 0x11AB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB54u;
            // 0x11ab58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C6B0u;
    if (runtime->hasFunction(0x10C6B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB5Cu; }
        if (ctx->pc != 0x11AB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x10c6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB5Cu; }
        if (ctx->pc != 0x11AB5Cu) { return; }
    }
    ctx->pc = 0x11AB5Cu;
    // 0x11ab5c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11ab60: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x11ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x11ab64: 0x8f8484bc  lw          $a0, -0x7B44($gp)
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935740)));
    // 0x11ab68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11ab68u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ab6c: 0x34630028  ori         $v1, $v1, 0x28
    ctx->pc = 0x11ab6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40u)));
    // 0x11ab70: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11AB70u;
    {
        const bool branch_taken_0x11ab70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB70u;
            // 0x11ab74: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab70) {
            ctx->pc = 0x11AB8Cu;
            goto label_11ab8c;
        }
    }
    ctx->pc = 0x11AB78u;
    // 0x11ab78: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x11ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x11ab7c: 0x344207ff  ori         $v0, $v0, 0x7FF
    ctx->pc = 0x11ab7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)2047u)));
    // 0x11ab80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11ab80u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11ab84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x11ab84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x11ab88: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x11ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_11ab8c:
    // 0x11ab8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x11ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x11ab90: 0x240381ff  addiu       $v1, $zero, -0x7E01
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x11ab94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11ab98u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11ab9c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x11ab9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6144u)));
    // 0x11aba0: 0xc0499b2  jal         func_1266C8
    ctx->pc = 0x11ABA0u;
    SET_GPR_U32(ctx, 31, 0x11ABA8u);
    ctx->pc = 0x11ABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABA0u;
            // 0x11aba4: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1266C8u;
    if (runtime->hasFunction(0x1266C8u)) {
        auto targetFn = runtime->lookupFunction(0x1266C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA8u; }
        if (ctx->pc != 0x11ABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDispEnv_0x1266c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABA8u; }
        if (ctx->pc != 0x11ABA8u) { return; }
    }
    ctx->pc = 0x11ABA8u;
    // 0x11aba8: 0xc043192  jal         func_10C648
    ctx->pc = 0x11ABA8u;
    SET_GPR_U32(ctx, 31, 0x11ABB0u);
    ctx->pc = 0x11ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABA8u;
            // 0x11abac: 0x3c100075  lui         $s0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (runtime->hasFunction(0x10C648u)) {
        auto targetFn = runtime->lookupFunction(0x10C648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABB0u; }
        if (ctx->pc != 0x11ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x10c648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABB0u; }
        if (ctx->pc != 0x11ABB0u) { return; }
    }
    ctx->pc = 0x11ABB0u;
    // 0x11abb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11abb4: 0x2610d840  addiu       $s0, $s0, -0x27C0
    ctx->pc = 0x11abb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957120));
    // 0x11abb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11abb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11abbc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x11abbcu;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x11abc0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x11abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x11abc4: 0x2042025  or          $a0, $s0, $a0
    ctx->pc = 0x11abc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x11abc8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x11abc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x11abcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11abccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11abd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11abd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11abd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abdc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x11abdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11abe0: 0xc046d24  jal         func_11B490
    ctx->pc = 0x11ABE0u;
    SET_GPR_U32(ctx, 31, 0x11ABE8u);
    ctx->pc = 0x11ABE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABE0u;
            // 0x11abe4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B490u;
    if (runtime->hasFunction(0x11B490u)) {
        auto targetFn = runtime->lookupFunction(0x11B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABE8u; }
        if (ctx->pc != 0x11ABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFtag_0x11b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABE8u; }
        if (ctx->pc != 0x11ABE8u) { return; }
    }
    ctx->pc = 0x11ABE8u;
    // 0x11abe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11abe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abec: 0xc046e2c  jal         func_11B8B0
    ctx->pc = 0x11ABECu;
    SET_GPR_U32(ctx, 31, 0x11ABF4u);
    ctx->pc = 0x11ABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABECu;
            // 0x11abf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B8B0u;
    if (runtime->hasFunction(0x11B8B0u)) {
        auto targetFn = runtime->lookupFunction(0x11B8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABF4u; }
        if (ctx->pc != 0x11ABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setPRMODECONT_0x11b8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ABF4u; }
        if (ctx->pc != 0x11ABF4u) { return; }
    }
    ctx->pc = 0x11ABF4u;
    // 0x11abf4: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x11abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x11abf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11abfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ac00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac04: 0x24c3003f  addiu       $v1, $a2, 0x3F
    ctx->pc = 0x11ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x11ac08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ac08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac0c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x11ac0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ac10: 0x24c6007e  addiu       $a2, $a2, 0x7E
    ctx->pc = 0x11ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x11ac14: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x11ac14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x11ac18: 0xc046de0  jal         func_11B780
    ctx->pc = 0x11AC18u;
    SET_GPR_U32(ctx, 31, 0x11AC20u);
    ctx->pc = 0x11AC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC18u;
            // 0x11ac1c: 0x63183  sra         $a2, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B780u;
    if (runtime->hasFunction(0x11B780u)) {
        auto targetFn = runtime->lookupFunction(0x11B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC20u; }
        if (ctx->pc != 0x11AC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setFRAME_1_0x11b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC20u; }
        if (ctx->pc != 0x11AC20u) { return; }
    }
    ctx->pc = 0x11AC20u;
    // 0x11ac20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ac20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11ac28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ac28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ac2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ac30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11ac34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11ac38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11ac3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac40: 0xc046df2  jal         func_11B7C8
    ctx->pc = 0x11AC40u;
    SET_GPR_U32(ctx, 31, 0x11AC48u);
    ctx->pc = 0x11AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC40u;
            // 0x11ac44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B7C8u;
    if (runtime->hasFunction(0x11B7C8u)) {
        auto targetFn = runtime->lookupFunction(0x11B7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC48u; }
        if (ctx->pc != 0x11AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTEST_1_0x11b7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC48u; }
        if (ctx->pc != 0x11AC48u) { return; }
    }
    ctx->pc = 0x11AC48u;
    // 0x11ac48: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x11ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x11ac4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac50: 0x8e260030  lw          $a2, 0x30($s1)
    ctx->pc = 0x11ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x11ac54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ac54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac58: 0x2469001f  addiu       $t1, $v1, 0x1F
    ctx->pc = 0x11ac58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x11ac5c: 0x2468003e  addiu       $t0, $v1, 0x3E
    ctx->pc = 0x11ac5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x11ac60: 0x249382a  slt         $a3, $s2, $t1
    ctx->pc = 0x11ac60u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11ac64: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x11ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11ac68: 0x127400b  movn        $t0, $t1, $a3
    ctx->pc = 0x11ac68u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 9));
    // 0x11ac6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ac70: 0x84143  sra         $t0, $t0, 5
    ctx->pc = 0x11ac70u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 5));
    // 0x11ac74: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11ac78: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x11ac78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x11ac7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11ac7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac80: 0xc046e10  jal         func_11B840
    ctx->pc = 0x11AC80u;
    SET_GPR_U32(ctx, 31, 0x11AC88u);
    ctx->pc = 0x11AC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC80u;
            // 0x11ac84: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B840u;
    if (runtime->hasFunction(0x11B840u)) {
        auto targetFn = runtime->lookupFunction(0x11B840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC88u; }
        if (ctx->pc != 0x11AC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setSCISSOR_1_0x11b840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC88u; }
        if (ctx->pc != 0x11AC88u) { return; }
    }
    ctx->pc = 0x11AC88u;
    // 0x11ac88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ac8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac90: 0xc046e20  jal         func_11B880
    ctx->pc = 0x11AC90u;
    SET_GPR_U32(ctx, 31, 0x11AC98u);
    ctx->pc = 0x11AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AC90u;
            // 0x11ac94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B880u;
    if (runtime->hasFunction(0x11B880u)) {
        auto targetFn = runtime->lookupFunction(0x11B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC98u; }
        if (ctx->pc != 0x11AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setXYOFFSET_1_0x11b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AC98u; }
        if (ctx->pc != 0x11AC98u) { return; }
    }
    ctx->pc = 0x11AC98u;
    // 0x11ac98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ac9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11ac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11aca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aca4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11aca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11aca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11acacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acb0: 0xc046e54  jal         func_11B950
    ctx->pc = 0x11ACB0u;
    SET_GPR_U32(ctx, 31, 0x11ACB8u);
    ctx->pc = 0x11ACB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ACB0u;
            // 0x11acb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B950u;
    if (runtime->hasFunction(0x11B950u)) {
        auto targetFn = runtime->lookupFunction(0x11B950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ACB8u; }
        if (ctx->pc != 0x11ACB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setCLAMP_1_0x11b950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11ACB8u; }
        if (ctx->pc != 0x11ACB8u) { return; }
    }
    ctx->pc = 0x11ACB8u;
    // 0x11acb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x11acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11acbc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x11acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x11acc0: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x11acc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40976u)));
    // 0x11acc4: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x11acc4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)40992u)));
    // 0x11acc8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11acc8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x11accc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x11acccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x11acd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11acd4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11acd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11acd8: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x11acd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40960u)));
    // 0x11acdc: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x11acdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x11ace0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11ace0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ace4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ace8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11ace8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11acec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11acecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11acf0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11acf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11acf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11acf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11acf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11acfc: 0x8043322  j           func_10CC88
    ctx->pc = 0x11ACFCu;
    ctx->pc = 0x11AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11ACFCu;
            // 0x11ad00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x11AD04u;
}
