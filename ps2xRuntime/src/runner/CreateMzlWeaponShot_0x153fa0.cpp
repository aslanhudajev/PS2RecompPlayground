#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateMzlWeaponShot
// Address: 0x153fa0 - 0x15401c
void CreateMzlWeaponShot_0x153fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateMzlWeaponShot_0x153fa0");
#endif

    ctx->pc = 0x153fa0u;

    // 0x153fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153fa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x153fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153fa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x153fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153fac: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x153FACu;
    SET_GPR_U32(ctx, 31, 0x153FB4u);
    ctx->pc = 0x153FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153FACu;
            // 0x153fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FB4u; }
        if (ctx->pc != 0x153FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153FB4u; }
        if (ctx->pc != 0x153FB4u) { return; }
    }
    ctx->pc = 0x153FB4u;
    // 0x153fb4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x153fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x153fb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153fbc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x153fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x153fc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153fc4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x153fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x153fc8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x153fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x153fcc: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x153fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x153fd0: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x153fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x153fd4: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x153fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x153fd8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x153fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x153fdc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x153fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x153fe0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x153fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x153fe4: 0xac460030  sw          $a2, 0x30($v0)
    ctx->pc = 0x153fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 6));
    // 0x153fe8: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x153fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    // 0x153fec: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x153fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x153ff0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x153ff0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x153ff4: 0x0  nop
    ctx->pc = 0x153ff4u;
    // NOP
    // 0x153ff8: 0x0  nop
    ctx->pc = 0x153ff8u;
    // NOP
    // 0x153ffc: 0x2010  mfhi        $a0
    ctx->pc = 0x153ffcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x154000: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x154000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x154004: 0xac460034  sw          $a2, 0x34($v0)
    ctx->pc = 0x154004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 6));
    // 0x154008: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x154008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
    // 0x15400c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154014: 0x3e00008  jr          $ra
    ctx->pc = 0x154014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154014u;
            // 0x154018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15401Cu;
}
