#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShapeGetGiftag
// Address: 0x1179a8 - 0x117a8c
void ShapeGetGiftag_0x1179a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShapeGetGiftag_0x1179a8");
#endif

    ctx->pc = 0x1179a8u;

    // 0x1179a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1179a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1179ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1179acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1179b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1179b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1179b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1179b8: 0x32120007  andi        $s2, $s0, 0x7
    ctx->pc = 0x1179b8u;
    SET_GPR_VEC(ctx, 18, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)7u)));
    // 0x1179bc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1179bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1179c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1179c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1179c4: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x1179c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x1179c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1179c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1179cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1179ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1179d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1179d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1179d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179dc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1179dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1179e0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1179e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179e4: 0xc044550  jal         func_111540
    ctx->pc = 0x1179E4u;
    SET_GPR_U32(ctx, 31, 0x1179ECu);
    ctx->pc = 0x1179E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1179E4u;
            // 0x1179e8: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111540u;
    if (runtime->hasFunction(0x111540u)) {
        auto targetFn = runtime->lookupFunction(0x111540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1179ECu; }
        if (ctx->pc != 0x1179ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiGsGeneralStatus_0x111540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1179ECu; }
        if (ctx->pc != 0x1179ECu) { return; }
    }
    ctx->pc = 0x1179ECu;
    // 0x1179ec: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x1179ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1179f0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1179f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1179f4: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x1179f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1179f8: 0x36440008  ori         $a0, $s2, 0x8
    ctx->pc = 0x1179f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)8u)));
    // 0x1179fc: 0x510fa  dsrl        $v0, $a1, 3
    ctx->pc = 0x1179fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 3);
    // 0x117a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x117a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117a04u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x117a08: 0x223300a  movz        $a2, $s1, $v1
    ctx->pc = 0x117a08u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x117a0c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117A0Cu;
    {
        const bool branch_taken_0x117a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A0Cu;
            // 0x117a10: 0x242200a  movz        $a0, $s2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a0c) {
            ctx->pc = 0x117A24u;
            goto label_117a24;
        }
    }
    ctx->pc = 0x117A14u;
    // 0x117a14: 0x5113a  dsrl        $v0, $a1, 4
    ctx->pc = 0x117a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 4);
    // 0x117a18: 0x34830010  ori         $v1, $a0, 0x10
    ctx->pc = 0x117a18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)16u)));
    // 0x117a1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117a1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x117a20: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x117a20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_117a24:
    // 0x117a24: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x117a24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x117a28: 0x30820018  andi        $v0, $a0, 0x18
    ctx->pc = 0x117a28u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)24u)));
    // 0x117a2c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x117a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x117a30: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x117a30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x117a34: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x117a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x117a38: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A38u;
    {
        const bool branch_taken_0x117a38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A38u;
            // 0x117a3c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a38) {
            ctx->pc = 0x117A48u;
            goto label_117a48;
        }
    }
    ctx->pc = 0x117A40u;
    // 0x117a40: 0x34c28000  ori         $v0, $a2, 0x8000
    ctx->pc = 0x117a40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)32768u)));
    // 0x117a44: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x117a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_117a48:
    // 0x117a48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x117a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a4c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x117a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x117a50: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117a54: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x117a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x117a58: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x117a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x117a5c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x117a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x117a60: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x117a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x117a64: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x117a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x117a68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x117a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117a6c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x117a6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x117a70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117a74: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x117a74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117a78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117a78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a7c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a80: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x117a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a84: 0x3e00008  jr          $ra
    ctx->pc = 0x117A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A84u;
            // 0x117a88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117A24u: goto label_117a24;
            case 0x117A48u: goto label_117a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117A8Cu;
}
