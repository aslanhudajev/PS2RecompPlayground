#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iRotateThreadReadyQueue
// Address: 0x12fba8 - 0x12fc24
void iRotateThreadReadyQueue_0x12fba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iRotateThreadReadyQueue_0x12fba8");
#endif

    ctx->pc = 0x12fba8u;

    // 0x12fba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fbac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fbb4: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x12fbb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x12fbb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FBB8u;
    {
        const bool branch_taken_0x12fbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBB8u;
            // 0x12fbbc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbb8) {
            ctx->pc = 0x12FBD0u;
            goto label_12fbd0;
        }
    }
    ctx->pc = 0x12FBC0u;
    // 0x12fbc0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x12fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x12fbc4: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
    // 0x12fbc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FBC8u;
    {
        const bool branch_taken_0x12fbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBC8u;
            // 0x12fbcc: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbc8) {
            ctx->pc = 0x12FBD8u;
            goto label_12fbd8;
        }
    }
    ctx->pc = 0x12FBD0u;
label_12fbd0:
    // 0x12fbd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12FBD0u;
    {
        const bool branch_taken_0x12fbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FBD0u;
            // 0x12fbd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbd0) {
            ctx->pc = 0x12FC14u;
            goto label_12fc14;
        }
    }
    ctx->pc = 0x12FBD8u;
label_12fbd8:
    // 0x12fbd8: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x12fbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x12fbdc: 0x24632478  addiu       $v1, $v1, 0x2478
    ctx->pc = 0x12fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9336));
    // 0x12fbe0: 0x8ca42470  lw          $a0, 0x2470($a1)
    ctx->pc = 0x12fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9328)));
    // 0x12fbe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12fbe8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12fbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fbec: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x12fbecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x12fbf0: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12fbf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12fbf8: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x12fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fbfc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12fc00: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x12fc00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x12fc04: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12fc04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc08: 0xc04bb24  jal         func_12EC90
    ctx->pc = 0x12FC08u;
    SET_GPR_U32(ctx, 31, 0x12FC10u);
    ctx->pc = 0x12FC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC08u;
            // 0x12fc0c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC90u;
    if (runtime->hasFunction(0x12EC90u)) {
        auto targetFn = runtime->lookupFunction(0x12EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC10u; }
        if (ctx->pc != 0x12FC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x12ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC10u; }
        if (ctx->pc != 0x12FC10u) { return; }
    }
    ctx->pc = 0x12FC10u;
    // 0x12fc10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12fc10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12fc14:
    // 0x12fc14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12fc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fc18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fc18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC1Cu;
            // 0x12fc20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FBD0u: goto label_12fbd0;
            case 0x12FBD8u: goto label_12fbd8;
            case 0x12FC14u: goto label_12fc14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FC24u;
}
