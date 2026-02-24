#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sprintf_r
// Address: 0x12b480 - 0x12b4e8
void _sprintf_r_0x12b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sprintf_r_0x12b480");
#endif

    ctx->pc = 0x12b480u;

    // 0x12b480: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x12b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x12b484: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x12b484u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b488: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x12b488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x12b48c: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x12b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x12b490: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12b490u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12b494: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12b494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b498: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x12b498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x12b49c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12b4a0: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x12b4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x12b4a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12b4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b4a8: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x12b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x12b4ac: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x12b4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x12b4b0: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x12b4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x12b4b4: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x12b4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x12b4b8: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x12b4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x12b4bc: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x12b4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x12b4c0: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x12b4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x12b4c4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x12b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x12b4c8: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x12b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x12b4cc: 0xc04b0b4  jal         func_12C2D0
    ctx->pc = 0x12B4CCu;
    SET_GPR_U32(ctx, 31, 0x12B4D4u);
    ctx->pc = 0x12B4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4CCu;
            // 0x12b4d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C2D0u;
    if (runtime->hasFunction(0x12C2D0u)) {
        auto targetFn = runtime->lookupFunction(0x12C2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4D4u; }
        if (ctx->pc != 0x12B4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vfprintf_0x12c2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12B4D4u; }
        if (ctx->pc != 0x12B4D4u) { return; }
    }
    ctx->pc = 0x12B4D4u;
    // 0x12b4d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b4d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12b4dc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x12b4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B4E0u;
            // 0x12b4e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B4E8u;
}
