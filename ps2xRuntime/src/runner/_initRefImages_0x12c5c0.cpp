#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _initRefImages
// Address: 0x12c5c0 - 0x12c6a0
void _initRefImages_0x12c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_initRefImages_0x12c5c0");
#endif

    ctx->pc = 0x12c5c0u;

    // 0x12c5c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12c5c4: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x12c5c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
    // 0x12c5c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12c5cc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x12c5ccu;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 14), _mm_cvtsi32_si128((int)65535u)));
    // 0x12c5d0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x12c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12c5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c5d8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x12c5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c5dc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x12c5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12c5e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12c5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12c5e4: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x12c5e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x12c5e8: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x12c5e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12c5ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12c5f0: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x12c5f0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12c5f4: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x12c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x12c5f8: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x12c5f8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x12c5fc: 0x18e8824  and         $s1, $t4, $t6
    ctx->pc = 0x12c5fcu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x12c600: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x12c600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x12c604: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12c608: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x12c608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c60c: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12c610: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x12c614: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x12c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x12c618: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x12c618u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c61c: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x12c61cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 19)));
    // 0x12c620: 0x1ae7824  and         $t7, $t5, $t6
    ctx->pc = 0x12c620u;
    SET_GPR_VEC(ctx, 15, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x12c624: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x12c624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x12c628: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12c62c: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x12c62cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 19)));
    // 0x12c630: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x12c630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c634: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x12c634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12c638: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x12c638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x12c63c: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x12c63cu;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x12c640: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x12c640u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), GPR_VEC(ctx, 19)));
    // 0x12c644: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12c644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c64c: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x12c64cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x12c650: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x12c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x12c654: 0x28e1824  and         $v1, $s4, $t6
    ctx->pc = 0x12c654u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 20), GPR_VEC(ctx, 14)));
    // 0x12c658: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x12c658u;
    SET_GPR_VEC(ctx, 13, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x12c65c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x12c65cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 19)));
    // 0x12c660: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12c660u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 14)));
    // 0x12c664: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12c664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x12c668: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x12c668u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 13), GPR_VEC(ctx, 19)));
    // 0x12c66c: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x12c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x12c670: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x12c670u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x12c674: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x12c674u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x12c678: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x12c678u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x12c67c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x12c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x12c680: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x12c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c684: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x12c684u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x12c688: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x12c688u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c68c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12c68cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c690: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12c690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c694: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12c694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12c698: 0x3e00008  jr          $ra
    ctx->pc = 0x12C698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C698u;
            // 0x12c69c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C6A0u;
}
