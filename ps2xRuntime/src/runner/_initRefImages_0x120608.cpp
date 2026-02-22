#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _initRefImages
// Address: 0x120608 - 0x1206f0
void _initRefImages_0x120608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x120608u;

    // 0x120608: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x120608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x12060c: 0x3c0c0017  lui         $t4, 0x17
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)23 << 16));
    // 0x120610: 0x8c43190c  lw          $v1, 0x190C($v0)
    ctx->pc = 0x120610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6412)));
    // 0x120614: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120618: 0x8d821910  lw          $v0, 0x1910($t4)
    ctx->pc = 0x120618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 6416)));
    // 0x12061c: 0x3c0e0fff  lui         $t6, 0xFFF
    ctx->pc = 0x12061cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4095 << 16));
    // 0x120620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120624: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x120624u;
    SET_GPR_VEC(ctx, 14, PS2_POR(GPR_VEC(ctx, 14), _mm_cvtsi32_si128((int)65535u)));
    // 0x120628: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x120628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12062c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x12062cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120630: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x120630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x120634: 0x24120180  addiu       $s2, $zero, 0x180
    ctx->pc = 0x120634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x120638: 0x8fac0058  lw          $t4, 0x58($sp)
    ctx->pc = 0x120638u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12063c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x120640: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x120640u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x120644: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x120644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x120648: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x120648u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x12064c: 0x18e8824  and         $s1, $t4, $t6
    ctx->pc = 0x12064cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x120650: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x120654: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x120654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x120658: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x120658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12065c: 0x8fad0060  lw          $t5, 0x60($sp)
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120660: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x120664: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x120664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x120668: 0x8fb40068  lw          $s4, 0x68($sp)
    ctx->pc = 0x120668u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12066c: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x12066cu;
    SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 17), GPR_VEC(ctx, 19)));
    // 0x120670: 0x1ae7824  and         $t7, $t5, $t6
    ctx->pc = 0x120670u;
    SET_GPR_VEC(ctx, 15, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x120674: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x120674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x120678: 0x6c6021  addu        $t4, $v1, $t4
    ctx->pc = 0x120678u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x12067c: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x12067cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 19)));
    // 0x120680: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x120680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120684: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x120684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x120688: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x120688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
    // 0x12068c: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x12068cu;
    SET_GPR_VEC(ctx, 12, PS2_PAND(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x120690: 0x1936025  or          $t4, $t4, $s3
    ctx->pc = 0x120690u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), GPR_VEC(ctx, 19)));
    // 0x120694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12069c: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x12069cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1206a0: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1206a4: 0x28e1824  and         $v1, $s4, $t6
    ctx->pc = 0x1206a4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 20), GPR_VEC(ctx, 14)));
    // 0x1206a8: 0x1ae6824  and         $t5, $t5, $t6
    ctx->pc = 0x1206a8u;
    SET_GPR_VEC(ctx, 13, PS2_PAND(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x1206ac: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1206acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 19)));
    // 0x1206b0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x1206b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 14)));
    // 0x1206b4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1206b8: 0x1b36825  or          $t5, $t5, $s3
    ctx->pc = 0x1206b8u;
    SET_GPR_VEC(ctx, 13, PS2_POR(GPR_VEC(ctx, 13), GPR_VEC(ctx, 19)));
    // 0x1206bc: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x1206bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x1206c0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1206c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 19)));
    // 0x1206c4: 0xad0f0000  sw          $t7, 0x0($t0)
    ctx->pc = 0x1206c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 15));
    // 0x1206c8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x1206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1206cc: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x1206ccu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x1206d0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1206d4: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x1206d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x1206d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1206dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1206e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1206e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1206e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1206e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1206e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1206E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1206ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1206E8u;
            // 0x1206ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1206F0u;
}
