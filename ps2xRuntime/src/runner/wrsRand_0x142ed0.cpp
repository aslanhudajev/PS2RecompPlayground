#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsRand
// Address: 0x142ed0 - 0x142f7c
void wrsRand_0x142ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsRand_0x142ed0");
#endif

    ctx->pc = 0x142ed0u;

    // 0x142ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142ed4: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x142ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142edc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142ee0: 0x8c249be0  lw          $a0, -0x6420($at)
    ctx->pc = 0x142ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941664)));
    // 0x142ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ee8: 0x24c69bd0  addiu       $a2, $a2, -0x6430
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
    // 0x142eec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x142eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_142ef0:
    // 0x142ef0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142ef4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x142ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x142ef8: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x142ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x142efc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x142efcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x142f00: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x142f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x142f04: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x142f04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142f08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x142f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x142f0c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x142F0Cu;
    {
        const bool branch_taken_0x142f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F0Cu;
            // 0x142f10: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142f0c) {
            ctx->pc = 0x142EF0u;
            goto label_142ef0;
        }
    }
    ctx->pc = 0x142F14u;
    // 0x142f14: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142f18: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x142f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142f1c: 0x8c229be0  lw          $v0, -0x6420($at)
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941664)));
    // 0x142f20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f24: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x142f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x142f28: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x142f2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x142f30: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x142f34: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142f38: 0xac229be0  sw          $v0, -0x6420($at)
    ctx->pc = 0x142f38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941664), GPR_U32(ctx, 2));
    // 0x142f3c: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x142f3cu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x142f40: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142f44: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x142f44u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x142f48: 0x8c229be0  lw          $v0, -0x6420($at)
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941664)));
    // 0x142f4c: 0x64380a  movz        $a3, $v1, $a0
    ctx->pc = 0x142f4cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x142f50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x142f50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x142f54: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142f58: 0xac229be0  sw          $v0, -0x6420($at)
    ctx->pc = 0x142f58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941664), GPR_U32(ctx, 2));
    // 0x142f5c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x142f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x142f60: 0xc050be0  jal         func_142F80
    ctx->pc = 0x142F60u;
    SET_GPR_U32(ctx, 31, 0x142F68u);
    ctx->pc = 0x142F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142F60u;
            // 0x142f64: 0x8c249be0  lw          $a0, -0x6420($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294941664)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142F80u;
    if (runtime->hasFunction(0x142F80u)) {
        auto targetFn = runtime->lookupFunction(0x142F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F68u; }
        if (ctx->pc != 0x142F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BitScramble_0x142f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142F68u; }
        if (ctx->pc != 0x142F68u) { return; }
    }
    ctx->pc = 0x142F68u;
    // 0x142f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142f6c: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x142f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x142f70: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x142f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x142f74: 0x3e00008  jr          $ra
    ctx->pc = 0x142F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142F74u;
            // 0x142f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142EF0u: goto label_142ef0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142F7Cu;
}
