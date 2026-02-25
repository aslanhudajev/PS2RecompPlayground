#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fat_chain_trace
// Address: 0x11f730 - 0x11f7d8
void _fat_chain_trace_0x11f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fat_chain_trace_0x11f730");
#endif

    ctx->pc = 0x11f730u;

    // 0x11f730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f734: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f738: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x11f738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11f73c: 0x3c117fff  lui         $s1, 0x7FFF
    ctx->pc = 0x11f73cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
    // 0x11f740: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11f740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11f744: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11f744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11f748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11f74c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11f74cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f750: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11f754: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x11f754u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x11f758: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11f75c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x11f75cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f760: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x11f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x11f764: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f768: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F768u;
    {
        const bool branch_taken_0x11f768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F768u;
            // 0x11f76c: 0x3631ffff  ori         $s1, $s1, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f768) {
            ctx->pc = 0x11F778u;
            goto label_11f778;
        }
    }
    ctx->pc = 0x11F770u;
    // 0x11f770: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x11F770u;
    {
        const bool branch_taken_0x11f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F770u;
            // 0x11f774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f770) {
            ctx->pc = 0x11F7B8u;
            goto label_11f7b8;
        }
    }
    ctx->pc = 0x11F778u;
label_11f778:
    // 0x11f778: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11f778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f77c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f780: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x11F780u;
    SET_GPR_U32(ctx, 31, 0x11F788u);
    ctx->pc = 0x11F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F780u;
            // 0x11f784: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (runtime->hasFunction(0x11F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x11F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F788u; }
        if (ctx->pc != 0x11F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceMcFatGetNextClust_0x11f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F788u; }
        if (ctx->pc != 0x11F788u) { return; }
    }
    ctx->pc = 0x11F788u;
    // 0x11f788: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f78c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11f78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f790: 0x932824  and         $a1, $a0, $s3
    ctx->pc = 0x11f790u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 19)));
    // 0x11f794: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F794u;
    {
        const bool branch_taken_0x11f794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F794u;
            // 0x11f798: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f794) {
            ctx->pc = 0x11F7B8u;
            goto label_11f7b8;
        }
    }
    ctx->pc = 0x11F79Cu;
    // 0x11f79c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11f79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7a0: 0x10940005  beq         $a0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F7A0u;
    {
        const bool branch_taken_0x11f7a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x11F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7A0u;
            // 0x11f7a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7a0) {
            ctx->pc = 0x11F7B8u;
            goto label_11f7b8;
        }
    }
    ctx->pc = 0x11F7A8u;
    // 0x11f7a8: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x11F7A8u;
    {
        const bool branch_taken_0x11f7a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7A8u;
            // 0x11f7ac: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7a8) {
            ctx->pc = 0x11F778u;
            goto label_11f778;
        }
    }
    ctx->pc = 0x11F7B0u;
    // 0x11f7b0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x11f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x11f7b4: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x11f7b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36866u)));
label_11f7b8:
    // 0x11f7b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11f7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f7bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11f7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11f7c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11f7c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f7c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x11f7c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11f7c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11f7c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f7cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x11f7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11f7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11F7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7D0u;
            // 0x11f7d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F778u: goto label_11f778;
            case 0x11F7B8u: goto label_11f7b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F7D8u;
}
