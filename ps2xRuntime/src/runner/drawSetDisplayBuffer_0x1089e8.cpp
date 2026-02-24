#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawSetDisplayBuffer
// Address: 0x1089e8 - 0x108a90
void drawSetDisplayBuffer_0x1089e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawSetDisplayBuffer_0x1089e8");
#endif

    ctx->pc = 0x1089e8u;

    // 0x1089e8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1089e8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1089ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1089f0: 0xa7848494  sh          $a0, -0x7B6C($gp)
    ctx->pc = 0x1089f0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935700), (uint16_t)GPR_U32(ctx, 4));
    // 0x1089f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1089f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1089f8: 0xc0432fc  jal         func_10CBF0
    ctx->pc = 0x1089F8u;
    SET_GPR_U32(ctx, 31, 0x108A00u);
    ctx->pc = 0x1089FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1089F8u;
            // 0x1089fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CBF0u;
    if (runtime->hasFunction(0x10CBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A00u; }
        if (ctx->pc != 0x108A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x10cbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A00u; }
        if (ctx->pc != 0x108A00u) { return; }
    }
    ctx->pc = 0x108A00u;
    // 0x108a00: 0x97848494  lhu         $a0, -0x7B6C($gp)
    ctx->pc = 0x108a00u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935700)));
    // 0x108a04: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x108a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x108a08: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x108a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x108a0c: 0x3c0b1200  lui         $t3, 0x1200
    ctx->pc = 0x108a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4608 << 16));
    // 0x108a10: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x108a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108a14: 0x24421600  addiu       $v0, $v0, 0x1600
    ctx->pc = 0x108a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x108a18: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x108a18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x108a1c: 0x3c091200  lui         $t1, 0x1200
    ctx->pc = 0x108a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4608 << 16));
    // 0x108a20: 0x34e70020  ori         $a3, $a3, 0x20
    ctx->pc = 0x108a20u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)32u)));
    // 0x108a24: 0x35290070  ori         $t1, $t1, 0x70
    ctx->pc = 0x108a24u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)112u)));
    // 0x108a28: 0x3c081200  lui         $t0, 0x1200
    ctx->pc = 0x108a28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4608 << 16));
    // 0x108a2c: 0x3c0a1200  lui         $t2, 0x1200
    ctx->pc = 0x108a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4608 << 16));
    // 0x108a30: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x108a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x108a34: 0x35080090  ori         $t0, $t0, 0x90
    ctx->pc = 0x108a34u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)144u)));
    // 0x108a38: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x108a38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108a3c: 0x354a0080  ori         $t2, $t2, 0x80
    ctx->pc = 0x108a3cu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)128u)));
    // 0x108a40: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x108a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x108a44: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x108a44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x108a48: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x108a48u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x108a4c: 0x34a500a0  ori         $a1, $a1, 0xA0
    ctx->pc = 0x108a4cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)160u)));
    // 0x108a50: 0x34c600e0  ori         $a2, $a2, 0xE0
    ctx->pc = 0x108a50u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)224u)));
    // 0x108a54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a58: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x108a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108a5c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x108a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x108a60: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x108a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108a64: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x108a64u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x108a68: 0xdc820018  ld          $v0, 0x18($a0)
    ctx->pc = 0x108a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108a6c: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x108a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x108a70: 0xdc830020  ld          $v1, 0x20($a0)
    ctx->pc = 0x108a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x108a74: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x108a74u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x108a78: 0xdc820028  ld          $v0, 0x28($a0)
    ctx->pc = 0x108a78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x108a7c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x108a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x108a80: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x108a80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x108a84: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x108a84u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x108a88: 0x3e00008  jr          $ra
    ctx->pc = 0x108A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A88u;
            // 0x108a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108A90u;
}
