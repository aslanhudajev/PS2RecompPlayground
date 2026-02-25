#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: changeMasterVolume
// Address: 0x186ef0 - 0x186f54
void changeMasterVolume_0x186ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("changeMasterVolume_0x186ef0");
#endif

    ctx->pc = 0x186ef0u;

    // 0x186ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x186ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x186efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186f00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186f00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f08:
    // 0x186f08: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x186f08u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2432u)));
    // 0x186f0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186f10: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x186f10u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x186f14: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x186F14u;
    SET_GPR_U32(ctx, 31, 0x186F1Cu);
    ctx->pc = 0x186F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F14u;
            // 0x186f18: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F1Cu; }
        if (ctx->pc != 0x186F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F1Cu; }
        if (ctx->pc != 0x186F1Cu) { return; }
    }
    ctx->pc = 0x186F1Cu;
    // 0x186f1c: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x186f1cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)2688u)));
    // 0x186f20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186f24: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x186f24u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x186f28: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x186F28u;
    SET_GPR_U32(ctx, 31, 0x186F30u);
    ctx->pc = 0x186F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186F28u;
            // 0x186f2c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F30u; }
        if (ctx->pc != 0x186F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186F30u; }
        if (ctx->pc != 0x186F30u) { return; }
    }
    ctx->pc = 0x186F30u;
    // 0x186f30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x186f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x186f34: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x186f34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x186f38: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x186F38u;
    {
        const bool branch_taken_0x186f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x186f38) {
            ctx->pc = 0x186F08u;
            goto label_186f08;
        }
    }
    ctx->pc = 0x186F40u;
    // 0x186f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x186F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F4Cu;
            // 0x186f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186F08u: goto label_186f08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186F54u;
}
