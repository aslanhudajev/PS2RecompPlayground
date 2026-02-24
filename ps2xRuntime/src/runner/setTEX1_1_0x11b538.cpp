#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setTEX1_1
// Address: 0x11b538 - 0x11b5a0
void setTEX1_1_0x11b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setTEX1_1_0x11b538");
#endif

    ctx->pc = 0x11b538u;

    // 0x11b538: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x11b538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x11b53c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x11b53cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11b540: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11b540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11b544: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x11b544u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x11b548: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11b548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11b54c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x11b54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x11b550: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x11b550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x11b554: 0x637ba  dsrl        $a2, $a2, 30
    ctx->pc = 0x11b554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 30);
    // 0x11b558: 0x94dfa  dsrl        $t1, $t1, 23
    ctx->pc = 0x11b558u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 23);
    // 0x11b55c: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x11b55cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x11b560: 0x73efa  dsrl        $a3, $a3, 27
    ctx->pc = 0x11b560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 27);
    // 0x11b564: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x11b564u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x11b568: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x11b568u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x11b56c: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x11b56cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 11)));
    // 0x11b570: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x11b570u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x11b574: 0xa537a  dsrl        $t2, $t2, 13
    ctx->pc = 0x11b574u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 13);
    // 0x11b578: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x11b578u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x11b57c: 0x10a4025  or          $t0, $t0, $t2
    ctx->pc = 0x11b57cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x11b580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b584: 0xa83025  or          $a2, $a1, $t0
    ctx->pc = 0x11b584u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x11b588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b58c: 0xc046d3a  jal         func_11B4E8
    ctx->pc = 0x11B58Cu;
    SET_GPR_U32(ctx, 31, 0x11B594u);
    ctx->pc = 0x11B590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B58Cu;
            // 0x11b590: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B4E8u;
    if (runtime->hasFunction(0x11B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x11B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B594u; }
        if (ctx->pc != 0x11B594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setGIFad_0x11b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B594u; }
        if (ctx->pc != 0x11B594u) { return; }
    }
    ctx->pc = 0x11B594u;
    // 0x11b594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b598: 0x3e00008  jr          $ra
    ctx->pc = 0x11B598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B598u;
            // 0x11b59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B5A0u;
}
