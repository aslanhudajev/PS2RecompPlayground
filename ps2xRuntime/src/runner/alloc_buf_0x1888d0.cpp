#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: alloc_buf
// Address: 0x1888d0 - 0x188990
void alloc_buf_0x1888d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("alloc_buf_0x1888d0");
#endif

    ctx->pc = 0x1888d0u;

    // 0x1888d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1888d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1888d4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x1888d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1888d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1888dc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1888dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1888e0: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x1888E0u;
    SET_GPR_U32(ctx, 31, 0x1888E8u);
    ctx->pc = 0x1888E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888E0u;
            // 0x1888e4: 0x3445a000  ori         $a1, $v0, 0xA000 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40960u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888E8u; }
        if (ctx->pc != 0x1888E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888E8u; }
        if (ctx->pc != 0x1888E8u) { return; }
    }
    ctx->pc = 0x1888E8u;
    // 0x1888e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1888e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1888ec: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1888f0: 0xac22cb30  sw          $v0, -0x34D0($at)
    ctx->pc = 0x1888f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953776), GPR_U32(ctx, 2));
    // 0x1888f4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x1888f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x1888f8: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x1888F8u;
    SET_GPR_U32(ctx, 31, 0x188900u);
    ctx->pc = 0x1888FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888F8u;
            // 0x1888fc: 0x34459c80  ori         $a1, $v0, 0x9C80 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)40064u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188900u; }
        if (ctx->pc != 0x188900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188900u; }
        if (ctx->pc != 0x188900u) { return; }
    }
    ctx->pc = 0x188900u;
    // 0x188900: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188904: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x188908: 0xac22cb28  sw          $v0, -0x34D8($at)
    ctx->pc = 0x188908u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953768), GPR_U32(ctx, 2));
    // 0x18890c: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x18890Cu;
    SET_GPR_U32(ctx, 31, 0x188914u);
    ctx->pc = 0x188910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18890Cu;
            // 0x188910: 0x24051010  addiu       $a1, $zero, 0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188914u; }
        if (ctx->pc != 0x188914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188914u; }
        if (ctx->pc != 0x188914u) { return; }
    }
    ctx->pc = 0x188914u;
    // 0x188914: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188918: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18891c: 0xac22cb20  sw          $v0, -0x34E0($at)
    ctx->pc = 0x18891cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953760), GPR_U32(ctx, 2));
    // 0x188920: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x188924: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x188924u;
    SET_GPR_U32(ctx, 31, 0x18892Cu);
    ctx->pc = 0x188928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188924u;
            // 0x188928: 0x3445916c  ori         $a1, $v0, 0x916C (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37228u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18892Cu; }
        if (ctx->pc != 0x18892Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18892Cu; }
        if (ctx->pc != 0x18892Cu) { return; }
    }
    ctx->pc = 0x18892Cu;
    // 0x18892c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188930: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x188934: 0xac22cb18  sw          $v0, -0x34E8($at)
    ctx->pc = 0x188934u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953752), GPR_U32(ctx, 2));
    // 0x188938: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x188938u;
    SET_GPR_U32(ctx, 31, 0x188940u);
    ctx->pc = 0x18893Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188938u;
            // 0x18893c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188940u; }
        if (ctx->pc != 0x188940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188940u; }
        if (ctx->pc != 0x188940u) { return; }
    }
    ctx->pc = 0x188940u;
    // 0x188940: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188944: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x188948: 0xac22cb10  sw          $v0, -0x34F0($at)
    ctx->pc = 0x188948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953744), GPR_U32(ctx, 2));
    // 0x18894c: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x18894Cu;
    SET_GPR_U32(ctx, 31, 0x188954u);
    ctx->pc = 0x188950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18894Cu;
            // 0x188950: 0x24056000  addiu       $a1, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188954u; }
        if (ctx->pc != 0x188954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188954u; }
        if (ctx->pc != 0x188954u) { return; }
    }
    ctx->pc = 0x188954u;
    // 0x188954: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188958: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x188958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18895c: 0xac22cb08  sw          $v0, -0x34F8($at)
    ctx->pc = 0x18895cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953736), GPR_U32(ctx, 2));
    // 0x188960: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x188960u;
    SET_GPR_U32(ctx, 31, 0x188968u);
    ctx->pc = 0x188964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188960u;
            // 0x188964: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188968u; }
        if (ctx->pc != 0x188968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188968u; }
        if (ctx->pc != 0x188968u) { return; }
    }
    ctx->pc = 0x188968u;
    // 0x188968: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18896c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x18896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x188970: 0xac22cb00  sw          $v0, -0x3500($at)
    ctx->pc = 0x188970u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953728), GPR_U32(ctx, 2));
    // 0x188974: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x188974u;
    SET_GPR_U32(ctx, 31, 0x18897Cu);
    ctx->pc = 0x188978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188974u;
            // 0x188978: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18897Cu; }
        if (ctx->pc != 0x18897Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18897Cu; }
        if (ctx->pc != 0x18897Cu) { return; }
    }
    ctx->pc = 0x18897Cu;
    // 0x18897c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18897cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188980: 0xac22caf8  sw          $v0, -0x3508($at)
    ctx->pc = 0x188980u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953720), GPR_U32(ctx, 2));
    // 0x188984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188988: 0x3e00008  jr          $ra
    ctx->pc = 0x188988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188988u;
            // 0x18898c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188990u;
}
