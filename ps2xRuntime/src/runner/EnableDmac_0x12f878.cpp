#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnableDmac
// Address: 0x12f878 - 0x12f8e0
void EnableDmac_0x12f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnableDmac_0x12f878");
#endif

    ctx->pc = 0x12f878u;

    // 0x12f878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f87c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12f880: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f88c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x12f88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x12f890: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x12f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x12f894: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x12f894u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x12f898: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F898u;
    {
        const bool branch_taken_0x12f898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f898) {
            ctx->pc = 0x12F8A8u;
            goto label_12f8a8;
        }
    }
    ctx->pc = 0x12F8A0u;
    // 0x12f8a0: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12F8A0u;
    SET_GPR_U32(ctx, 31, 0x12F8A8u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8A8u; }
        if (ctx->pc != 0x12F8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8A8u; }
        if (ctx->pc != 0x12F8A8u) { return; }
    }
    ctx->pc = 0x12F8A8u;
label_12f8a8:
    // 0x12f8a8: 0xc04ba70  jal         func_12E9C0
    ctx->pc = 0x12F8A8u;
    SET_GPR_U32(ctx, 31, 0x12F8B0u);
    ctx->pc = 0x12F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8A8u;
            // 0x12f8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E9C0u;
    if (runtime->hasFunction(0x12E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8B0u; }
        if (ctx->pc != 0x12F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableDmac_0x12e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8B0u; }
        if (ctx->pc != 0x12F8B0u) { return; }
    }
    ctx->pc = 0x12F8B0u;
    // 0x12f8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8b4: 0xf  sync
    ctx->pc = 0x12f8b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12f8b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F8B8u;
    {
        const bool branch_taken_0x12f8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8B8u;
            // 0x12f8bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f8b8) {
            ctx->pc = 0x12F8CCu;
            goto label_12f8cc;
        }
    }
    ctx->pc = 0x12F8C0u;
    // 0x12f8c0: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12F8C0u;
    SET_GPR_U32(ctx, 31, 0x12F8C8u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8C8u; }
        if (ctx->pc != 0x12F8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F8C8u; }
        if (ctx->pc != 0x12F8C8u) { return; }
    }
    ctx->pc = 0x12F8C8u;
    // 0x12f8c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f8cc:
    // 0x12f8cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f8d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12f8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F8D8u;
            // 0x12f8dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F8A8u: goto label_12f8a8;
            case 0x12F8CCu: goto label_12f8cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F8E0u;
}
