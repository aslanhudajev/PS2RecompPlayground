#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CollisionADD_Src
// Address: 0x14f220 - 0x14f288
void CollisionADD_Src_0x14f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CollisionADD_Src_0x14f220");
#endif

    ctx->pc = 0x14f220u;

    // 0x14f220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f224: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14f228: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14f228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14f22c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14f22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14f230: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14f230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14f234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14f238: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14f238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14f240: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14f240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f244: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14f244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14f248: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x14f248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f24c: 0xc053ce0  jal         func_14F380
    ctx->pc = 0x14F24Cu;
    SET_GPR_U32(ctx, 31, 0x14F254u);
    ctx->pc = 0x14F250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14F24Cu;
            // 0x14f250: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F380u;
    if (runtime->hasFunction(0x14F380u)) {
        auto targetFn = runtime->lookupFunction(0x14F380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F254u; }
        if (ctx->pc != 0x14F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionAlloc_Src_0x14f380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14F254u; }
        if (ctx->pc != 0x14F254u) { return; }
    }
    ctx->pc = 0x14F254u;
    // 0x14f254: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x14f254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x14f258: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x14f258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x14f25c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x14f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x14f260: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x14f260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x14f264: 0xac530018  sw          $s3, 0x18($v0)
    ctx->pc = 0x14f264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 19));
    // 0x14f268: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14f26c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14f26cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14f270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14f274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14f278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f27c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14f27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f280: 0x3e00008  jr          $ra
    ctx->pc = 0x14F280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F280u;
            // 0x14f284: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14F288u;
}
