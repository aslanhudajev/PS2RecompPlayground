#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapLightColorSet
// Address: 0x1e2890 - 0x1e2e8c
void MapLightColorSet_0x1e2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapLightColorSet_0x1e2890");
#endif

    ctx->pc = 0x1e2890u;

    // 0x1e2890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e289c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e28a0: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x1E28A0u;
    SET_GPR_U32(ctx, 31, 0x1E28A8u);
    ctx->pc = 0x1E28A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28A0u;
            // 0x1e28a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28A8u; }
        if (ctx->pc != 0x1E28A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28A8u; }
        if (ctx->pc != 0x1E28A8u) { return; }
    }
    ctx->pc = 0x1E28A8u;
    // 0x1e28a8: 0xc056f74  jal         func_15BDD0
    ctx->pc = 0x1E28A8u;
    SET_GPR_U32(ctx, 31, 0x1E28B0u);
    ctx->pc = 0x1E28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28A8u;
            // 0x1e28ac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BDD0u;
    if (runtime->hasFunction(0x15BDD0u)) {
        auto targetFn = runtime->lookupFunction(0x15BDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28B0u; }
        if (ctx->pc != 0x1E28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        getGameStage_0x15bdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E28B0u; }
        if (ctx->pc != 0x1E28B0u) { return; }
    }
    ctx->pc = 0x1E28B0u;
    // 0x1e28b0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x1e28b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e28b4: 0x1020015c  beqz        $at, . + 4 + (0x15C << 2)
    ctx->pc = 0x1E28B4u;
    {
        const bool branch_taken_0x1e28b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E28B4u;
            // 0x1e28b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28b4) {
            ctx->pc = 0x1E2E28u;
            goto label_1e2e28;
        }
    }
    ctx->pc = 0x1E28BCu;
    // 0x1e28bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e28c0: 0x24842df0  addiu       $a0, $a0, 0x2DF0
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
    // 0x1e28c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e28c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e28cc: 0x600008  jr          $v1
    ctx->pc = 0x1E28CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E28D8u: goto label_1e28d8;
            case 0x1E2948u: goto label_1e2948;
            case 0x1E29B0u: goto label_1e29b0;
            case 0x1E2B38u: goto label_1e2b38;
            case 0x1E2CA8u: goto label_1e2ca8;
            case 0x1E2D00u: goto label_1e2d00;
            case 0x1E2D60u: goto label_1e2d60;
            case 0x1E2DC0u: goto label_1e2dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E28D4u;
    // 0x1e28d4: 0x0  nop
    ctx->pc = 0x1e28d4u;
    // NOP
label_1e28d8:
    // 0x1e28d8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e28d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e28dc: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e28dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e28e0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e28e4: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1e28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1e28e8: 0x3c033e9e  lui         $v1, 0x3E9E
    ctx->pc = 0x1e28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16030 << 16));
    // 0x1e28ec: 0x3465b852  ori         $a1, $v1, 0xB852
    ctx->pc = 0x1e28ecu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)47186u)));
    // 0x1e28f0: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x1e28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x1e28f4: 0xae0400c8  sw          $a0, 0xC8($s0)
    ctx->pc = 0x1e28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
    // 0x1e28f8: 0x3c033e42  lui         $v1, 0x3E42
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15938 << 16));
    // 0x1e28fc: 0x34648f5c  ori         $a0, $v1, 0x8F5C
    ctx->pc = 0x1e28fcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)36700u)));
    // 0x1e2900: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2904: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x1e2904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x1e2908: 0x3c033e38  lui         $v1, 0x3E38
    ctx->pc = 0x1e2908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15928 << 16));
    // 0x1e290c: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e290cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2910: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x1e2910u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e2914: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x1e2914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x1e2918: 0x3c033e23  lui         $v1, 0x3E23
    ctx->pc = 0x1e2918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15907 << 16));
    // 0x1e291c: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e291cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2920: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1e2920u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e2924: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1e2924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1e2928: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e292c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e292cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2930: 0x3c033ea3  lui         $v1, 0x3EA3
    ctx->pc = 0x1e2930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16035 << 16));
    // 0x1e2934: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e2934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e2938: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1e2938u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e293c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e293cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2940: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x1E2940u;
    {
        const bool branch_taken_0x1e2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2940u;
            // 0x1e2944: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2940) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2948u;
label_1e2948:
    // 0x1e2948: 0x3c033ebd  lui         $v1, 0x3EBD
    ctx->pc = 0x1e2948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16061 << 16));
    // 0x1e294c: 0x346470a4  ori         $a0, $v1, 0x70A4
    ctx->pc = 0x1e294cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)28836u)));
    // 0x1e2950: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2954: 0x3c033ea8  lui         $v1, 0x3EA8
    ctx->pc = 0x1e2954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16040 << 16));
    // 0x1e2958: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1e2958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1e295c: 0x3463f5c3  ori         $v1, $v1, 0xF5C3
    ctx->pc = 0x1e295cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)62915u)));
    // 0x1e2960: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1e2960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1e2964: 0x3c033ea3  lui         $v1, 0x3EA3
    ctx->pc = 0x1e2964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16035 << 16));
    // 0x1e2968: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1e2968u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e296c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1e296cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1e2970: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2974: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2978: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1e2978u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e297c: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x1e297cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x1e2980: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1e2980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x1e2984: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x1e2984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x1e2988: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x1e2988u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e298c: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x1e298cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    // 0x1e2990: 0x3c033e0f  lui         $v1, 0x3E0F
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15887 << 16));
    // 0x1e2994: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2998: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x1e2998u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e299c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e299cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e29a0: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e29a4: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e29a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e29a8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1E29A8u;
    {
        const bool branch_taken_0x1e29a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E29ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E29A8u;
            // 0x1e29ac: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e29a8) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E29B0u;
label_1e29b0:
    // 0x1e29b0: 0x2a210bb8  slti        $at, $s1, 0xBB8
    ctx->pc = 0x1e29b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1e29b4: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x1E29B4u;
    {
        const bool branch_taken_0x1e29b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e29b4) {
            ctx->pc = 0x1E2AC8u;
            goto label_1e2ac8;
        }
    }
    ctx->pc = 0x1E29BCu;
    // 0x1e29bc: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e29bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e29c0: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1e29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1e29c4: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x1e29c4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1e29c8: 0x3c043fa2  lui         $a0, 0x3FA2
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16290 << 16));
    // 0x1e29cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e29ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e29d0: 0x3c033f38  lui         $v1, 0x3F38
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16184 << 16));
    // 0x1e29d4: 0x346551eb  ori         $a1, $v1, 0x51EB
    ctx->pc = 0x1e29d4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20971u)));
    // 0x1e29d8: 0x348d8f5c  ori         $t5, $a0, 0x8F5C
    ctx->pc = 0x1e29d8u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)36700u)));
    // 0x1e29dc: 0x3c033f8f  lui         $v1, 0x3F8F
    ctx->pc = 0x1e29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16271 << 16));
    // 0x1e29e0: 0x3c043fae  lui         $a0, 0x3FAE
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16302 << 16));
    // 0x1e29e4: 0x346c5c29  ori         $t4, $v1, 0x5C29
    ctx->pc = 0x1e29e4u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e29e8: 0x348b147b  ori         $t3, $a0, 0x147B
    ctx->pc = 0x1e29e8u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)5243u)));
    // 0x1e29ec: 0x3c033f8a  lui         $v1, 0x3F8A
    ctx->pc = 0x1e29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16266 << 16));
    // 0x1e29f0: 0x3c043eb8  lui         $a0, 0x3EB8
    ctx->pc = 0x1e29f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16056 << 16));
    // 0x1e29f4: 0x346ae147  ori         $t2, $v1, 0xE147
    ctx->pc = 0x1e29f4u;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)57671u)));
    // 0x1e29f8: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x1e29f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x1e29fc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1e29fcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a00: 0x3c033f97  lui         $v1, 0x3F97
    ctx->pc = 0x1e2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16279 << 16));
    // 0x1e2a04: 0x3469ae14  ori         $t1, $v1, 0xAE14
    ctx->pc = 0x1e2a04u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)44564u)));
    // 0x1e2a08: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1e2a08u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1e2a0c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2a10: 0x348651ec  ori         $a2, $a0, 0x51EC
    ctx->pc = 0x1e2a10u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e2a14: 0x3467cccd  ori         $a3, $v1, 0xCCCD
    ctx->pc = 0x1e2a14u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2a18: 0x3c04be8f  lui         $a0, 0xBE8F
    ctx->pc = 0x1e2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48783 << 16));
    // 0x1e2a1c: 0x3c033eb3  lui         $v1, 0x3EB3
    ctx->pc = 0x1e2a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16051 << 16));
    // 0x1e2a20: 0x34845c29  ori         $a0, $a0, 0x5C29
    ctx->pc = 0x1e2a20u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e2a24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e2a24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2a28: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x1e2a28u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a2c: 0x0  nop
    ctx->pc = 0x1e2a2cu;
    // NOP
    // 0x1e2a30: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2a30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2a34: 0x34653333  ori         $a1, $v1, 0x3333
    ctx->pc = 0x1e2a34u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e2a38: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x1e2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
    // 0x1e2a3c: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1e2a3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)18350u)));
    // 0x1e2a40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2a40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2a44: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1e2a44u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2a48: 0x0  nop
    ctx->pc = 0x1e2a48u;
    // NOP
    // 0x1e2a4c: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e2a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2a50: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2a50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2a54: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1e2a54u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a58: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1e2a58u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2a5c: 0x0  nop
    ctx->pc = 0x1e2a5cu;
    // NOP
    // 0x1e2a60: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2a64: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2a64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2a68: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2a6c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1e2a6cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1e2a70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2a74: 0x0  nop
    ctx->pc = 0x1e2a74u;
    // NOP
    // 0x1e2a78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2a78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2a7c: 0xe60100c8  swc1        $f1, 0xC8($s0)
    ctx->pc = 0x1e2a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e2a80: 0xae0800cc  sw          $t0, 0xCC($s0)
    ctx->pc = 0x1e2a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 8));
    // 0x1e2a84: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1e2a84u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2a88: 0xae0700d0  sw          $a3, 0xD0($s0)
    ctx->pc = 0x1e2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 7));
    // 0x1e2a8c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1e2a8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2a90: 0xae0700d4  sw          $a3, 0xD4($s0)
    ctx->pc = 0x1e2a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 7));
    // 0x1e2a94: 0xae0700d8  sw          $a3, 0xD8($s0)
    ctx->pc = 0x1e2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 7));
    // 0x1e2a98: 0xae0800dc  sw          $t0, 0xDC($s0)
    ctx->pc = 0x1e2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 8));
    // 0x1e2a9c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e2a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2aa0: 0x46030882  mul.s       $f2, $f1, $f3
    ctx->pc = 0x1e2aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2aa4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e2aa4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2aa8: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1e2aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2aac: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x1e2aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2ab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e2ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2ab4: 0x0  nop
    ctx->pc = 0x1e2ab4u;
    // NOP
    // 0x1e2ab8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2ab8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2abc: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e2abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e2ac0: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x1E2AC0u;
    {
        const bool branch_taken_0x1e2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2AC0u;
            // 0x1e2ac4: 0xae0800ec  sw          $t0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac0) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2AC8u;
label_1e2ac8:
    // 0x1e2ac8: 0x3c033f0c  lui         $v1, 0x3F0C
    ctx->pc = 0x1e2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16140 << 16));
    // 0x1e2acc: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2accu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2ad0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2ad4: 0x3c033e75  lui         $v1, 0x3E75
    ctx->pc = 0x1e2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15989 << 16));
    // 0x1e2ad8: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1e2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1e2adc: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1e2adcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e2ae0: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1e2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1e2ae4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2ae8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2ae8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2aec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1e2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1e2af0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2af4: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2af8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2af8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2afc: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1e2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x1e2b00: 0x3c033eb8  lui         $v1, 0x3EB8
    ctx->pc = 0x1e2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16056 << 16));
    // 0x1e2b04: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2b08: 0x346551ec  ori         $a1, $v1, 0x51EC
    ctx->pc = 0x1e2b08u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e2b0c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x1e2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x1e2b10: 0x3c033eb3  lui         $v1, 0x3EB3
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16051 << 16));
    // 0x1e2b14: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2b18: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x1e2b18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e2b1c: 0xae0500e0  sw          $a1, 0xE0($s0)
    ctx->pc = 0x1e2b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 5));
    // 0x1e2b20: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2b24: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e2b28: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2b2c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1E2B2Cu;
    {
        const bool branch_taken_0x1e2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B2Cu;
            // 0x1e2b30: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b2c) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2B34u;
    // 0x1e2b34: 0x0  nop
    ctx->pc = 0x1e2b34u;
    // NOP
label_1e2b38:
    // 0x1e2b38: 0x2a210bb8  slti        $at, $s1, 0xBB8
    ctx->pc = 0x1e2b38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1e2b3c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E2B3Cu;
    {
        const bool branch_taken_0x1e2b3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b3c) {
            ctx->pc = 0x1E2C38u;
            goto label_1e2c38;
        }
    }
    ctx->pc = 0x1E2B44u;
    // 0x1e2b44: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1e2b44u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2b48: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1e2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1e2b4c: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x1e2b4cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x1e2b50: 0x3c043f0c  lui         $a0, 0x3F0C
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16140 << 16));
    // 0x1e2b54: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1e2b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e2b58: 0x3c033df5  lui         $v1, 0x3DF5
    ctx->pc = 0x1e2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15861 << 16));
    // 0x1e2b5c: 0x3465c290  ori         $a1, $v1, 0xC290
    ctx->pc = 0x1e2b5cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49808u)));
    // 0x1e2b60: 0x348dcccd  ori         $t5, $a0, 0xCCCD
    ctx->pc = 0x1e2b60u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2b64: 0x3c033e23  lui         $v1, 0x3E23
    ctx->pc = 0x1e2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15907 << 16));
    // 0x1e2b68: 0x3c043e75  lui         $a0, 0x3E75
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15989 << 16));
    // 0x1e2b6c: 0x346cd70a  ori         $t4, $v1, 0xD70A
    ctx->pc = 0x1e2b6cu;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e2b70: 0x348bc28f  ori         $t3, $a0, 0xC28F
    ctx->pc = 0x1e2b70u;
    SET_GPR_VEC(ctx, 11, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e2b74: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2b78: 0x3c043eb8  lui         $a0, 0x3EB8
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16056 << 16));
    // 0x1e2b7c: 0x346acccd  ori         $t2, $v1, 0xCCCD
    ctx->pc = 0x1e2b7cu;
    SET_GPR_VEC(ctx, 10, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2b80: 0x3c094120  lui         $t1, 0x4120
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2b84: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1e2b84u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2b88: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2b8c: 0x3468cccd  ori         $t0, $v1, 0xCCCD
    ctx->pc = 0x1e2b8cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2b90: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1e2b90u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1e2b94: 0x3c033e57  lui         $v1, 0x3E57
    ctx->pc = 0x1e2b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15959 << 16));
    // 0x1e2b98: 0x34670a3e  ori         $a3, $v1, 0xA3E
    ctx->pc = 0x1e2b98u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2622u)));
    // 0x1e2b9c: 0x348651ec  ori         $a2, $a0, 0x51EC
    ctx->pc = 0x1e2b9cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e2ba0: 0x3c043eb3  lui         $a0, 0x3EB3
    ctx->pc = 0x1e2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16051 << 16));
    // 0x1e2ba4: 0x3c033e05  lui         $v1, 0x3E05
    ctx->pc = 0x1e2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15877 << 16));
    // 0x1e2ba8: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1e2ba8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1e2bac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e2bacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2bb0: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x1e2bb0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2bb4: 0x0  nop
    ctx->pc = 0x1e2bb4u;
    // NOP
    // 0x1e2bb8: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2bb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2bbc: 0x34651eb8  ori         $a1, $v1, 0x1EB8
    ctx->pc = 0x1e2bbcu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x1e2bc0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2bc4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2bc8: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1e2bc8u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2bcc: 0x0  nop
    ctx->pc = 0x1e2bccu;
    // NOP
    // 0x1e2bd0: 0xe60100c0  swc1        $f1, 0xC0($s0)
    ctx->pc = 0x1e2bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2bd4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2bd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2bd8: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x1e2bd8u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2bdc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1e2bdcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2be0: 0x0  nop
    ctx->pc = 0x1e2be0u;
    // NOP
    // 0x1e2be4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e2be4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2be8: 0xe60100c4  swc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2bec: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x1e2becu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2bf0: 0xae0a00c8  sw          $t2, 0xC8($s0)
    ctx->pc = 0x1e2bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 10));
    // 0x1e2bf4: 0xae0900cc  sw          $t1, 0xCC($s0)
    ctx->pc = 0x1e2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 9));
    // 0x1e2bf8: 0xae0800d0  sw          $t0, 0xD0($s0)
    ctx->pc = 0x1e2bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 8));
    // 0x1e2bfc: 0xae0800d4  sw          $t0, 0xD4($s0)
    ctx->pc = 0x1e2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 8));
    // 0x1e2c00: 0xae0800d8  sw          $t0, 0xD8($s0)
    ctx->pc = 0x1e2c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 8));
    // 0x1e2c04: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1e2c04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e2c08: 0xae0900dc  sw          $t1, 0xDC($s0)
    ctx->pc = 0x1e2c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 9));
    // 0x1e2c0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e2c0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c10: 0x0  nop
    ctx->pc = 0x1e2c10u;
    // NOP
    // 0x1e2c14: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x1e2c14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e2c18: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x1e2c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1e2c1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e2c1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2c20: 0xe60200e0  swc1        $f2, 0xE0($s0)
    ctx->pc = 0x1e2c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e2c24: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2c28: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e2c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e2c2c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2c30: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1E2C30u;
    {
        const bool branch_taken_0x1e2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C30u;
            // 0x1e2c34: 0xae0900ec  sw          $t1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c30) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2C38u;
label_1e2c38:
    // 0x1e2c38: 0x3c033edc  lui         $v1, 0x3EDC
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16092 << 16));
    // 0x1e2c3c: 0x346428f6  ori         $a0, $v1, 0x28F6
    ctx->pc = 0x1e2c3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)10486u)));
    // 0x1e2c40: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2c44: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1e2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x1e2c48: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1e2c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1e2c4c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1e2c4cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e2c50: 0xae0300c4  sw          $v1, 0xC4($s0)
    ctx->pc = 0x1e2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 3));
    // 0x1e2c54: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2c58: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2c58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2c5c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1e2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1e2c60: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2c64: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2c68: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2c68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2c6c: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1e2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x1e2c70: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x1e2c74: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2c78: 0x3465999a  ori         $a1, $v1, 0x999A
    ctx->pc = 0x1e2c78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1e2c7c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x1e2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x1e2c80: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
    // 0x1e2c84: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2c88: 0x346447ae  ori         $a0, $v1, 0x47AE
    ctx->pc = 0x1e2c88u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)18350u)));
    // 0x1e2c8c: 0xae0500e0  sw          $a1, 0xE0($s0)
    ctx->pc = 0x1e2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 5));
    // 0x1e2c90: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2c94: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e2c98: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2c9c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1E2C9Cu;
    {
        const bool branch_taken_0x1e2c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2C9Cu;
            // 0x1e2ca0: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c9c) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2CA4u;
    // 0x1e2ca4: 0x0  nop
    ctx->pc = 0x1e2ca4u;
    // NOP
label_1e2ca8:
    // 0x1e2ca8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1e2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1e2cac: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2cacu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2cb0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2cb4: 0xae0400c0  sw          $a0, 0xC0($s0)
    ctx->pc = 0x1e2cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 4));
    // 0x1e2cb8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2cbc: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x1e2cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x1e2cc0: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1e2cc0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2cc4: 0xae0400c8  sw          $a0, 0xC8($s0)
    ctx->pc = 0x1e2cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
    // 0x1e2cc8: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2ccc: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2cd0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2cd0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2cd4: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x1e2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x1e2cd8: 0x3c033e85  lui         $v1, 0x3E85
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16005 << 16));
    // 0x1e2cdc: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x1e2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x1e2ce0: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x1e2ce0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7864u)));
    // 0x1e2ce4: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x1e2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    // 0x1e2ce8: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2cec: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x1e2cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x1e2cf0: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1e2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1e2cf4: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2cf8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1E2CF8u;
    {
        const bool branch_taken_0x1e2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2CF8u;
            // 0x1e2cfc: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf8) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2D00u;
label_1e2d00:
    // 0x1e2d00: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1e2d04: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2d04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2d08: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x1e2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x1e2d0c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x1e2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x1e2d10: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2d14: 0x3c033e8f  lui         $v1, 0x3E8F
    ctx->pc = 0x1e2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16015 << 16));
    // 0x1e2d18: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x1e2d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x1e2d1c: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x1e2d1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e2d20: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x1e2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x1e2d24: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2d28: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2d2c: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1e2d2cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2d30: 0xae0500d0  sw          $a1, 0xD0($s0)
    ctx->pc = 0x1e2d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 5));
    // 0x1e2d34: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2d38: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x1e2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
    // 0x1e2d3c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2d3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2d40: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x1e2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    // 0x1e2d44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2d48: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2d4c: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x1e2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x1e2d50: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e2d54: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2d58: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1E2D58u;
    {
        const bool branch_taken_0x1e2d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2D58u;
            // 0x1e2d5c: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d58) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2D60u;
label_1e2d60:
    // 0x1e2d60: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1e2d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1e2d64: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1e2d64u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2d68: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1e2d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2d6c: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x1e2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
    // 0x1e2d70: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2d74: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x1e2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x1e2d78: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2d78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2d7c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x1e2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x1e2d80: 0x3c033e8f  lui         $v1, 0x3E8F
    ctx->pc = 0x1e2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16015 << 16));
    // 0x1e2d84: 0xae0600cc  sw          $a2, 0xCC($s0)
    ctx->pc = 0x1e2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 6));
    // 0x1e2d88: 0x34655c29  ori         $a1, $v1, 0x5C29
    ctx->pc = 0x1e2d88u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)23593u)));
    // 0x1e2d8c: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1e2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x1e2d90: 0x3c033e42  lui         $v1, 0x3E42
    ctx->pc = 0x1e2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15938 << 16));
    // 0x1e2d94: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2d98: 0x34648f5c  ori         $a0, $v1, 0x8F5C
    ctx->pc = 0x1e2d98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)36700u)));
    // 0x1e2d9c: 0xae0500d8  sw          $a1, 0xD8($s0)
    ctx->pc = 0x1e2d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 5));
    // 0x1e2da0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2da4: 0xae0600dc  sw          $a2, 0xDC($s0)
    ctx->pc = 0x1e2da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 6));
    // 0x1e2da8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2da8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2dac: 0xae0400e0  sw          $a0, 0xE0($s0)
    ctx->pc = 0x1e2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 4));
    // 0x1e2db0: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1e2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1e2db4: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2db8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E2DB8u;
    {
        const bool branch_taken_0x1e2db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2DB8u;
            // 0x1e2dbc: 0xae0600ec  sw          $a2, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2db8) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2DC0u;
label_1e2dc0:
    // 0x1e2dc0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1e2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1e2dc4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1e2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1e2dc8: 0x3c033e57  lui         $v1, 0x3E57
    ctx->pc = 0x1e2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15959 << 16));
    // 0x1e2dcc: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x1e2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2dd0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1e2dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1e2dd4: 0x34630a3d  ori         $v1, $v1, 0xA3D
    ctx->pc = 0x1e2dd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2621u)));
    // 0x1e2dd8: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x1e2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    // 0x1e2ddc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1e2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
    // 0x1e2de0: 0x3c033db8  lui         $v1, 0x3DB8
    ctx->pc = 0x1e2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15800 << 16));
    // 0x1e2de4: 0x346451ec  ori         $a0, $v1, 0x51EC
    ctx->pc = 0x1e2de4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20972u)));
    // 0x1e2de8: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1e2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
    // 0x1e2dec: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e2decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2df0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1e2df0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e2df4: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x1e2df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x1e2df8: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x1e2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
    // 0x1e2dfc: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1e2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1e2e00: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1e2e00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x1e2e04: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1e2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1e2e08: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2e0c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2e0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2e10: 0x3c033e61  lui         $v1, 0x3E61
    ctx->pc = 0x1e2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15969 << 16));
    // 0x1e2e14: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x1e2e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
    // 0x1e2e18: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1e2e18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)18350u)));
    // 0x1e2e1c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2e20: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2E20u;
    {
        const bool branch_taken_0x1e2e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E20u;
            // 0x1e2e24: 0xae0500ec  sw          $a1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e20) {
            ctx->pc = 0x1E2E78u;
            goto label_1e2e78;
        }
    }
    ctx->pc = 0x1E2E28u;
label_1e2e28:
    // 0x1e2e28: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1e2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1e2e2c: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x1e2e2cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2e30: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x1e2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2e34: 0xae0600c0  sw          $a2, 0xC0($s0)
    ctx->pc = 0x1e2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 6));
    // 0x1e2e38: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1e2e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1e2e3c: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x1e2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
    // 0x1e2e40: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1e2e40u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2e44: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x1e2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
    // 0x1e2e48: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1e2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1e2e4c: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x1e2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
    // 0x1e2e50: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1e2e50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1e2e54: 0xae0400d0  sw          $a0, 0xD0($s0)
    ctx->pc = 0x1e2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 4));
    // 0x1e2e58: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x1e2e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
    // 0x1e2e5c: 0xae0400d8  sw          $a0, 0xD8($s0)
    ctx->pc = 0x1e2e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 4));
    // 0x1e2e60: 0xae0500dc  sw          $a1, 0xDC($s0)
    ctx->pc = 0x1e2e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 5));
    // 0x1e2e64: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x1e2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x1e2e68: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1e2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
    // 0x1e2e6c: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x1e2e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
    // 0x1e2e70: 0xae0500ec  sw          $a1, 0xEC($s0)
    ctx->pc = 0x1e2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 5));
    // 0x1e2e74: 0x0  nop
    ctx->pc = 0x1e2e74u;
    // NOP
label_1e2e78:
    // 0x1e2e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e2e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2e84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2E84u;
            // 0x1e2e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E28D8u: goto label_1e28d8;
            case 0x1E2948u: goto label_1e2948;
            case 0x1E29B0u: goto label_1e29b0;
            case 0x1E2AC8u: goto label_1e2ac8;
            case 0x1E2B38u: goto label_1e2b38;
            case 0x1E2C38u: goto label_1e2c38;
            case 0x1E2CA8u: goto label_1e2ca8;
            case 0x1E2D00u: goto label_1e2d00;
            case 0x1E2D60u: goto label_1e2d60;
            case 0x1E2DC0u: goto label_1e2dc0;
            case 0x1E2E28u: goto label_1e2e28;
            case 0x1E2E78u: goto label_1e2e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2E8Cu;
}
