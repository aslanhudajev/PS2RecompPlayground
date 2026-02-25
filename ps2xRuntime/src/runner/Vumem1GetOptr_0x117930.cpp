#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1GetOptr
// Address: 0x117930 - 0x1179a8
void Vumem1GetOptr_0x117930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1GetOptr_0x117930");
#endif

    ctx->pc = 0x117930u;

    // 0x117930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117934: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117938: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11793c: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x11793cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x117940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x117944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x117948: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x117948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11794c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x11794Cu;
    {
        const bool branch_taken_0x11794c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11794Cu;
            // 0x117950: 0x8e32721c  lw          $s2, 0x721C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11794c) {
            ctx->pc = 0x11798Cu;
            goto label_11798c;
        }
    }
    ctx->pc = 0x117954u;
    // 0x117954: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x117954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117958: 0xc045e10  jal         func_117840
    ctx->pc = 0x117958u;
    SET_GPR_U32(ctx, 31, 0x117960u);
    ctx->pc = 0x11795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117958u;
            // 0x11795c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117840u;
    if (runtime->hasFunction(0x117840u)) {
        auto targetFn = runtime->lookupFunction(0x117840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117960u; }
        if (ctx->pc != 0x117960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1CheckRest_0x117840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117960u; }
        if (ctx->pc != 0x117960u) { return; }
    }
    ctx->pc = 0x117960u;
    // 0x117960: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117960u;
    {
        const bool branch_taken_0x117960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117960) {
            ctx->pc = 0x117964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117960u;
            // 0x117964: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117974u;
            goto label_117974;
        }
    }
    ctx->pc = 0x117968u;
    // 0x117968: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11796c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11796Cu;
    {
        const bool branch_taken_0x11796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11796Cu;
            // 0x117970: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11796c) {
            ctx->pc = 0x117990u;
            goto label_117990;
        }
    }
    ctx->pc = 0x117974u;
label_117974:
    // 0x117974: 0x8e23721c  lw          $v1, 0x721C($s1)
    ctx->pc = 0x117974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29212)));
    // 0x117978: 0x8c447214  lw          $a0, 0x7214($v0)
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
    // 0x11797c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x11797cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x117980: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x117980u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x117984: 0xae23721c  sw          $v1, 0x721C($s1)
    ctx->pc = 0x117984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29212), GPR_U32(ctx, 3));
    // 0x117988: 0xac447214  sw          $a0, 0x7214($v0)
    ctx->pc = 0x117988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29204), GPR_U32(ctx, 4));
label_11798c:
    // 0x11798c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11798cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117990:
    // 0x117990: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117994: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117998: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11799c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11799cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1179A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1179A0u;
            // 0x1179a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117974u: goto label_117974;
            case 0x11798Cu: goto label_11798c;
            case 0x117990u: goto label_117990;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1179A8u;
}
