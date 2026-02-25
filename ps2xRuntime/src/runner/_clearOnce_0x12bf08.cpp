#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _clearOnce
// Address: 0x12bf08 - 0x12bf68
void _clearOnce_0x12bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_clearOnce_0x12bf08");
#endif

    ctx->pc = 0x12bf08u;

    // 0x12bf08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12bf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12bf0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bf10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12bf10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bf14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12bf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12bf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12bf1c: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x12BF1Cu;
    SET_GPR_U32(ctx, 31, 0x12BF24u);
    ctx->pc = 0x12BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF1Cu;
            // 0x12bf20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (runtime->hasFunction(0x126AF8u)) {
        auto targetFn = runtime->lookupFunction(0x126AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF24u; }
        if (ctx->pc != 0x12BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x126af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BF24u; }
        if (ctx->pc != 0x12BF24u) { return; }
    }
    ctx->pc = 0x12BF24u;
    // 0x12bf24: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x12bf24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
    // 0x12bf28: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x12bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x12bf2c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x12bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x12bf30: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x12bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x12bf34: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x12bf34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6144u)));
    // 0x12bf38: 0x34631b00  ori         $v1, $v1, 0x1B00
    ctx->pc = 0x12bf38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)6912u)));
    // 0x12bf3c: 0x34843300  ori         $a0, $a0, 0x3300
    ctx->pc = 0x12bf3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13056u)));
    // 0x12bf40: 0xae110590  sw          $s1, 0x590($s0)
    ctx->pc = 0x12bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 17));
    // 0x12bf44: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x12bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
    // 0x12bf48: 0xae0306d0  sw          $v1, 0x6D0($s0)
    ctx->pc = 0x12bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 3));
    // 0x12bf4c: 0xae0406d4  sw          $a0, 0x6D4($s0)
    ctx->pc = 0x12bf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 4));
    // 0x12bf50: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x12bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x12bf54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12bf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bf58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12bf58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bf5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x12BF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BF60u;
            // 0x12bf64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12BF68u;
}
