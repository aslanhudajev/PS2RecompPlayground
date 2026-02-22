#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InvalidDCache
// Address: 0x131230 - 0x1312ac
void InvalidDCache_0x131230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131230u;

    // 0x131230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131234: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x131234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x131238: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x131238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13123c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13123cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131240: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x131244: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x131244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13124c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x13124cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x131250: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x131250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x131254: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x131254u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 2)));
    // 0x131258: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131258u;
    {
        const bool branch_taken_0x131258 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131258) {
            ctx->pc = 0x131268u;
            goto label_131268;
        }
    }
    ctx->pc = 0x131260u;
    // 0x131260: 0xc0453ee  jal         func_114FB8
    ctx->pc = 0x131260u;
    SET_GPR_U32(ctx, 31, 0x131268u);
    ctx->pc = 0x114FB8u;
    if (runtime->hasFunction(0x114FB8u)) {
        auto targetFn = runtime->lookupFunction(0x114FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131268u; }
        if (ctx->pc != 0x131268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131268u; }
        if (ctx->pc != 0x131268u) { return; }
    }
    ctx->pc = 0x131268u;
label_131268:
    // 0x131268: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x131268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x13126c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x13126cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65472u)));
    // 0x131270: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x131270u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 17), GPR_VEC(ctx, 4)));
    // 0x131274: 0xc04c462  jal         func_131188
    ctx->pc = 0x131274u;
    SET_GPR_U32(ctx, 31, 0x13127Cu);
    ctx->pc = 0x131278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131274u;
            // 0x131278: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 18), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131188u;
    if (runtime->hasFunction(0x131188u)) {
        auto targetFn = runtime->lookupFunction(0x131188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13127Cu; }
        if (ctx->pc != 0x13127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceIDC_0x131188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13127Cu; }
        if (ctx->pc != 0x13127Cu) { return; }
    }
    ctx->pc = 0x13127Cu;
    // 0x13127c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13127Cu;
    {
        const bool branch_taken_0x13127c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13127Cu;
            // 0x131280: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13127c) {
            ctx->pc = 0x131298u;
            goto label_131298;
        }
    }
    ctx->pc = 0x131284u;
    // 0x131284: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131288: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x131288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13128c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13128cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131290: 0x8045400  j           func_115000
    ctx->pc = 0x131290u;
    ctx->pc = 0x131294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131290u;
            // 0x131294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x115000(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131298u;
label_131298:
    // 0x131298: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x131298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13129c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13129cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1312a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1312a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1312a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1312A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1312A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1312A4u;
            // 0x1312a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131268u: goto label_131268;
            case 0x131298u: goto label_131298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1312ACu;
}
