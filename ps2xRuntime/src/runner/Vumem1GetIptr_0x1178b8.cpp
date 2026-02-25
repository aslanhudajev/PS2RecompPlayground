#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1GetIptr
// Address: 0x1178b8 - 0x11792c
void Vumem1GetIptr_0x1178b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1GetIptr_0x1178b8");
#endif

    ctx->pc = 0x1178b8u;

    // 0x1178b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1178bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1178bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1178c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1178c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1178c4: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1178c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1178c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1178c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1178cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1178ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1178d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1178d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1178D4u;
    {
        const bool branch_taken_0x1178d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178D4u;
            // 0x1178d8: 0x8e327218  lw          $s2, 0x7218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d4) {
            ctx->pc = 0x117910u;
            goto label_117910;
        }
    }
    ctx->pc = 0x1178DCu;
    // 0x1178dc: 0xc045e10  jal         func_117840
    ctx->pc = 0x1178DCu;
    SET_GPR_U32(ctx, 31, 0x1178E4u);
    ctx->pc = 0x1178E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1178DCu;
            // 0x1178e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117840u;
    if (runtime->hasFunction(0x117840u)) {
        auto targetFn = runtime->lookupFunction(0x117840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178E4u; }
        if (ctx->pc != 0x1178E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vumem1CheckRest_0x117840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1178E4u; }
        if (ctx->pc != 0x1178E4u) { return; }
    }
    ctx->pc = 0x1178E4u;
    // 0x1178e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1178E4u;
    {
        const bool branch_taken_0x1178e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178e4) {
            ctx->pc = 0x1178E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1178E4u;
            // 0x1178e8: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1178F8u;
            goto label_1178f8;
        }
    }
    ctx->pc = 0x1178ECu;
    // 0x1178ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1178ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1178f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1178F0u;
    {
        const bool branch_taken_0x1178f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1178F0u;
            // 0x1178f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178f0) {
            ctx->pc = 0x117914u;
            goto label_117914;
        }
    }
    ctx->pc = 0x1178F8u;
label_1178f8:
    // 0x1178f8: 0x8e237218  lw          $v1, 0x7218($s1)
    ctx->pc = 0x1178f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29208)));
    // 0x1178fc: 0x8c447210  lw          $a0, 0x7210($v0)
    ctx->pc = 0x1178fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29200)));
    // 0x117900: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x117900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x117904: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x117904u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x117908: 0xae237218  sw          $v1, 0x7218($s1)
    ctx->pc = 0x117908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29208), GPR_U32(ctx, 3));
    // 0x11790c: 0xac447210  sw          $a0, 0x7210($v0)
    ctx->pc = 0x11790cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29200), GPR_U32(ctx, 4));
label_117910:
    // 0x117910: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x117910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_117914:
    // 0x117914: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x117914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117918: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11791c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11791cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117924: 0x3e00008  jr          $ra
    ctx->pc = 0x117924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117924u;
            // 0x117928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1178F8u: goto label_1178f8;
            case 0x117910u: goto label_117910;
            case 0x117914u: goto label_117914;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11792Cu;
}
