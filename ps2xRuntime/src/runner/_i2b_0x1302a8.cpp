#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _i2b
// Address: 0x1302a8 - 0x1302e0
void _i2b_0x1302a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1302a8u;

    // 0x1302a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1302a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1302ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1302acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1302b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1302b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1302b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1302b8: 0xc04bf8a  jal         func_12FE28
    ctx->pc = 0x1302B8u;
    SET_GPR_U32(ctx, 31, 0x1302C0u);
    ctx->pc = 0x1302BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1302B8u;
            // 0x1302bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FE28u;
    if (runtime->hasFunction(0x12FE28u)) {
        auto targetFn = runtime->lookupFunction(0x12FE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302C0u; }
        if (ctx->pc != 0x1302C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1302C0u; }
        if (ctx->pc != 0x1302C0u) { return; }
    }
    ctx->pc = 0x1302C0u;
    // 0x1302c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1302c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1302c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1302c8: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x1302c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
    // 0x1302cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1302ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1302d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1302d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302d4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1302d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1302d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1302D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1302D8u;
            // 0x1302dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1302E0u;
}
