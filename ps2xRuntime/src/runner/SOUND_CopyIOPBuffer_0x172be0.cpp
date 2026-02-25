#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_CopyIOPBuffer
// Address: 0x172be0 - 0x173244
void SOUND_CopyIOPBuffer_0x172be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_CopyIOPBuffer_0x172be0");
#endif

    ctx->pc = 0x172be0u;

    // 0x172be0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x172be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x172be4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x172be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x172be8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x172be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x172bec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172bf0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x172bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x172bf4: 0x24840f84  addiu       $a0, $a0, 0xF84
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3972));
    // 0x172bf8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x172bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x172bfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x172bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x172c00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x172c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x172c04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x172c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x172c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x172c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172c10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172c14: 0xac200a00  sw          $zero, 0xA00($at)
    ctx->pc = 0x172c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2560), GPR_U32(ctx, 0));
    // 0x172c18: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172c1c: 0x8c350f80  lw          $s5, 0xF80($at)
    ctx->pc = 0x172c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 3968)));
    // 0x172c20: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x172c24: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x172c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x172c28: 0xb52821  addu        $a1, $a1, $s5
    ctx->pc = 0x172c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x172c2c: 0x8c23a058  lw          $v1, -0x5FA8($at)
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942808)));
    // 0x172c30: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x172c30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172c34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x172c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x172c38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x172c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172c3c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172c40: 0xac240a10  sw          $a0, 0xA10($at)
    ctx->pc = 0x172c40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2576), GPR_U32(ctx, 4));
    // 0x172c44: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172c48: 0x8c240a10  lw          $a0, 0xA10($at)
    ctx->pc = 0x172c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2576)));
    // 0x172c4c: 0x10830172  beq         $a0, $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x172C4Cu;
    {
        const bool branch_taken_0x172c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x172C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172C4Cu;
            // 0x172c50: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c4c) {
            ctx->pc = 0x173218u;
            goto label_173218;
        }
    }
    ctx->pc = 0x172C54u;
    // 0x172c54: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x172c54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x172c58: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x172c58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x172c5c: 0xac24a058  sw          $a0, -0x5FA8($at)
    ctx->pc = 0x172c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942808), GPR_U32(ctx, 4));
    // 0x172c60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c64: 0x25080e90  addiu       $t0, $t0, 0xE90
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3728));
    // 0x172c68: 0x24e7a020  addiu       $a3, $a3, -0x5FE0
    ctx->pc = 0x172c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942752));
    // 0x172c6c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x172c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x172c70: 0x24050099  addiu       $a1, $zero, 0x99
    ctx->pc = 0x172c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x172c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x172c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172c78:
    // 0x172c78: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172c7c: 0x14660002  bne         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x172C7Cu;
    {
        const bool branch_taken_0x172c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x172c7c) {
            ctx->pc = 0x172C88u;
            goto label_172c88;
        }
    }
    ctx->pc = 0x172C84u;
    // 0x172c84: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x172c84u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
label_172c88:
    // 0x172c88: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x172c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172c8c: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x172C8Cu;
    {
        const bool branch_taken_0x172c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x172c8c) {
            ctx->pc = 0x172C98u;
            goto label_172c98;
        }
    }
    ctx->pc = 0x172C94u;
    // 0x172c94: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x172c94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
label_172c98:
    // 0x172c98: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x172c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x172c9c: 0x29230030  slti        $v1, $t1, 0x30
    ctx->pc = 0x172c9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x172ca0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x172ca4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x172CA4u;
    {
        const bool branch_taken_0x172ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172CA4u;
            // 0x172ca8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ca4) {
            ctx->pc = 0x172C78u;
            goto label_172c78;
        }
    }
    ctx->pc = 0x172CACu;
    // 0x172cac: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x172cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x172cb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x172cb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172cb4: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x172CB4u;
    {
        const bool branch_taken_0x172cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172CB4u;
            // 0x172cb8: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172cb4) {
            ctx->pc = 0x172E28u;
            goto label_172e28;
        }
    }
    ctx->pc = 0x172CBCu;
    // 0x172cbc: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x172cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x172cc0: 0x26520f80  addiu       $s2, $s2, 0xF80
    ctx->pc = 0x172cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3968));
    // 0x172cc4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x172cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x172cc8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x172ccc: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x172cccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x172cd0: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x172cd0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x172cd4: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x172cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x172cd8: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x172cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x172cdc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x172cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x172ce0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x172ce4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x172ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x172ce8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172cec: 0x24e70e90  addiu       $a3, $a3, 0xE90
    ctx->pc = 0x172cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3728));
    // 0x172cf0: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172cf4: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x172cf4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172cf8: 0x25ef0dd0  addiu       $t7, $t7, 0xDD0
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3536));
    // 0x172cfc: 0x25ce0d70  addiu       $t6, $t6, 0xD70
    ctx->pc = 0x172cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3440));
    // 0x172d00: 0x258c0cb0  addiu       $t4, $t4, 0xCB0
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3248));
    // 0x172d04: 0x254a0ec0  addiu       $t2, $t2, 0xEC0
    ctx->pc = 0x172d04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3776));
    // 0x172d08: 0x25080e00  addiu       $t0, $t0, 0xE00
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3584));
    // 0x172d0c: 0x24c60e60  addiu       $a2, $a2, 0xE60
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3680));
    // 0x172d10: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x172d14: 0x24a50e30  addiu       $a1, $a1, 0xE30
    ctx->pc = 0x172d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3632));
    // 0x172d18: 0x2484a020  addiu       $a0, $a0, -0x5FE0
    ctx->pc = 0x172d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942752));
    // 0x172d1c: 0x24630b10  addiu       $v1, $v1, 0xB10
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2832));
    // 0x172d20: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x172d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x172d24: 0x0  nop
    ctx->pc = 0x172d24u;
    // NOP
label_172d28:
    // 0x172d28: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x172d2c: 0x74903  sra         $t1, $a3, 4
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 4));
    // 0x172d30: 0x3134003f  andi        $s4, $t1, 0x3F
    ctx->pc = 0x172d30u;
    SET_GPR_VEC(ctx, 20, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)63u)));
    // 0x172d34: 0x7ba90090  lq          $t1, 0x90($sp)
    ctx->pc = 0x172d34u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x172d38: 0x1346821  addu        $t5, $t1, $s4
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x172d3c: 0x81ab0000  lb          $t3, 0x0($t5)
    ctx->pc = 0x172d3cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x172d40: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x172d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172d44: 0x11690004  beq         $t3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D44u;
    {
        const bool branch_taken_0x172d44 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 9));
        if (branch_taken_0x172d44) {
            ctx->pc = 0x172D58u;
            goto label_172d58;
        }
    }
    ctx->pc = 0x172D4Cu;
    // 0x172d4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172D4Cu;
    {
        const bool branch_taken_0x172d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D4Cu;
            // 0x172d50: 0xa1b80000  sb          $t8, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d4c) {
            ctx->pc = 0x172D60u;
            goto label_172d60;
        }
    }
    ctx->pc = 0x172D54u;
    // 0x172d54: 0x0  nop
    ctx->pc = 0x172d54u;
    // NOP
label_172d58:
    // 0x172d58: 0xa1b70000  sb          $s7, 0x0($t5)
    ctx->pc = 0x172d58u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 23));
    // 0x172d5c: 0x0  nop
    ctx->pc = 0x172d5cu;
    // NOP
label_172d60:
    // 0x172d60: 0x74a83  sra         $t1, $a3, 10
    ctx->pc = 0x172d60u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 10));
    // 0x172d64: 0x3136003f  andi        $s6, $t1, 0x3F
    ctx->pc = 0x172d64u;
    SET_GPR_VEC(ctx, 22, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)63u)));
    // 0x172d68: 0x74883  sra         $t1, $a3, 2
    ctx->pc = 0x172d68u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 7), 2));
    // 0x172d6c: 0x312b0003  andi        $t3, $t1, 0x3
    ctx->pc = 0x172d6cu;
    SET_GPR_VEC(ctx, 11, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)3u)));
    // 0x172d70: 0x1f44821  addu        $t1, $t7, $s4
    ctx->pc = 0x172d70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x172d74: 0xa12b0000  sb          $t3, 0x0($t1)
    ctx->pc = 0x172d74u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x172d78: 0x30e90003  andi        $t1, $a3, 0x3
    ctx->pc = 0x172d78u;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)3u)));
    // 0x172d7c: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172D7Cu;
    {
        const bool branch_taken_0x172d7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D7Cu;
            // 0x172d80: 0x3c01003a  lui         $at, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d7c) {
            ctx->pc = 0x172D90u;
            goto label_172d90;
        }
    }
    ctx->pc = 0x172D84u;
    // 0x172d84: 0xac290a00  sw          $t1, 0xA00($at)
    ctx->pc = 0x172d84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2560), GPR_U32(ctx, 9));
    // 0x172d88: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172d8c: 0xac340a08  sw          $s4, 0xA08($at)
    ctx->pc = 0x172d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2568), GPR_U32(ctx, 20));
label_172d90:
    // 0x172d90: 0x144840  sll         $t1, $s4, 1
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x172d94: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x172d94u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x172d98: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x172d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x172d9c: 0xa5270000  sh          $a3, 0x0($t1)
    ctx->pc = 0x172d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x172da0: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x172da0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x172da4: 0x8e4d0008  lw          $t5, 0x8($s2)
    ctx->pc = 0x172da4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x172da8: 0x1915821  addu        $t3, $t4, $s1
    ctx->pc = 0x172da8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x172dac: 0x1514821  addu        $t1, $t2, $s1
    ctx->pc = 0x172dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x172db0: 0x1143821  addu        $a3, $t0, $s4
    ctx->pc = 0x172db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x172db4: 0xd48021  addu        $s0, $a2, $s4
    ctx->pc = 0x172db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x172db8: 0xad6d0000  sw          $t5, 0x0($t3)
    ctx->pc = 0x172db8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 13));
    // 0x172dbc: 0x964b000c  lhu         $t3, 0xC($s2)
    ctx->pc = 0x172dbcu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x172dc0: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x172dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x172dc4: 0x8e49000c  lw          $t1, 0xC($s2)
    ctx->pc = 0x172dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x172dc8: 0x94fc2  srl         $t1, $t1, 31
    ctx->pc = 0x172dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x172dcc: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x172dccu;
    SET_GPR_VEC(ctx, 9, PS2_PAND(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x172dd0: 0xa0e90000  sb          $t1, 0x0($a3)
    ctx->pc = 0x172dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x172dd4: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x172dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x172dd8: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x172dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x172ddc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x172ddcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172de0: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x172DE0u;
    {
        const bool branch_taken_0x172de0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x172de0) {
            ctx->pc = 0x172E00u;
            goto label_172e00;
        }
    }
    ctx->pc = 0x172DE8u;
    // 0x172de8: 0xb43821  addu        $a3, $a1, $s4
    ctx->pc = 0x172de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x172dec: 0xa0f60000  sb          $s6, 0x0($a3)
    ctx->pc = 0x172decu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 22));
    // 0x172df0: 0x80e70000  lb          $a3, 0x0($a3)
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172df4: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x172df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172DF8u;
    {
        const bool branch_taken_0x172df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172DF8u;
            // 0x172dfc: 0xa0f40000  sb          $s4, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172df8) {
            ctx->pc = 0x172E08u;
            goto label_172e08;
        }
    }
    ctx->pc = 0x172E00u;
label_172e00:
    // 0x172e00: 0xb43821  addu        $a3, $a1, $s4
    ctx->pc = 0x172e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x172e04: 0xa0fe0000  sb          $fp, 0x0($a3)
    ctx->pc = 0x172e04u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 30));
label_172e08:
    // 0x172e08: 0x8e4b0014  lw          $t3, 0x14($s2)
    ctx->pc = 0x172e08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x172e0c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x172e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x172e10: 0x714821  addu        $t1, $v1, $s1
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x172e14: 0x335382a  slt         $a3, $t9, $s5
    ctx->pc = 0x172e14u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x172e18: 0x26730005  addiu       $s3, $s3, 0x5
    ctx->pc = 0x172e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x172e1c: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x172e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x172e20: 0x14e0ffc1  bnez        $a3, . + 4 + (-0x3F << 2)
    ctx->pc = 0x172E20u;
    {
        const bool branch_taken_0x172e20 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E20u;
            // 0x172e24: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e20) {
            ctx->pc = 0x172D28u;
            goto label_172d28;
        }
    }
    ctx->pc = 0x172E28u;
label_172e28:
    // 0x172e28: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x172e28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x172e2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x172e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e30: 0x24e70e90  addiu       $a3, $a3, 0xE90
    ctx->pc = 0x172e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3728));
    // 0x172e34: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x172e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172e38: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x172e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172e3c: 0x0  nop
    ctx->pc = 0x172e3cu;
    // NOP
label_172e40:
    // 0x172e40: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x172e40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172e44: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172E44u;
    {
        const bool branch_taken_0x172e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x172e44) {
            ctx->pc = 0x172E58u;
            goto label_172e58;
        }
    }
    ctx->pc = 0x172E4Cu;
    // 0x172e4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172E4Cu;
    {
        const bool branch_taken_0x172e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E4Cu;
            // 0x172e50: 0xa0e40000  sb          $a0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e4c) {
            ctx->pc = 0x172E68u;
            goto label_172e68;
        }
    }
    ctx->pc = 0x172E54u;
    // 0x172e54: 0x0  nop
    ctx->pc = 0x172e54u;
    // NOP
label_172e58:
    // 0x172e58: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172E58u;
    {
        const bool branch_taken_0x172e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x172e58) {
            ctx->pc = 0x172E68u;
            goto label_172e68;
        }
    }
    ctx->pc = 0x172E60u;
    // 0x172e60: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x172e60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x172e64: 0x0  nop
    ctx->pc = 0x172e64u;
    // NOP
label_172e68:
    // 0x172e68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x172e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x172e6c: 0x28c30030  slti        $v1, $a2, 0x30
    ctx->pc = 0x172e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x172e70: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x172E70u;
    {
        const bool branch_taken_0x172e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x172E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172E70u;
            // 0x172e74: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172e70) {
            ctx->pc = 0x172E40u;
            goto label_172e40;
        }
    }
    ctx->pc = 0x172E78u;
    // 0x172e78: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172e7c: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x172e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x172e80: 0x24630f88  addiu       $v1, $v1, 0xF88
    ctx->pc = 0x172e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x172e84: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x172e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x172e88: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x172e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172e8c: 0x26670004  addiu       $a3, $s3, 0x4
    ctx->pc = 0x172e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x172e90: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x172e90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172e94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172e98: 0x24630f8c  addiu       $v1, $v1, 0xF8C
    ctx->pc = 0x172e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3980));
    // 0x172e9c: 0x664821  addu        $t1, $v1, $a2
    ctx->pc = 0x172e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172ea0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172ea4: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x172ea8: 0x664021  addu        $t0, $v1, $a2
    ctx->pc = 0x172ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172eac: 0xac2aa010  sw          $t2, -0x5FF0($at)
    ctx->pc = 0x172eacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942736), GPR_U32(ctx, 10));
    // 0x172eb0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172eb4: 0x8d290000  lw          $t1, 0x0($t1)
    ctx->pc = 0x172eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x172eb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ebc: 0x24630f94  addiu       $v1, $v1, 0xF94
    ctx->pc = 0x172ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3988));
    // 0x172ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x172ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ec4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x172ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172ec8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x172ec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ecc: 0xac2909e0  sw          $t1, 0x9E0($at)
    ctx->pc = 0x172eccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2528), GPR_U32(ctx, 9));
    // 0x172ed0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x172ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x172ed4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ed8: 0xac2809e8  sw          $t0, 0x9E8($at)
    ctx->pc = 0x172ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2536), GPR_U32(ctx, 8));
    // 0x172edc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ee0: 0xac270ad0  sw          $a3, 0xAD0($at)
    ctx->pc = 0x172ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2768), GPR_U32(ctx, 7));
    // 0x172ee4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ee8: 0x8c2709e8  lw          $a3, 0x9E8($at)
    ctx->pc = 0x172ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2536)));
    // 0x172eec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172ef0: 0xac270ac8  sw          $a3, 0xAC8($at)
    ctx->pc = 0x172ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2760), GPR_U32(ctx, 7));
    // 0x172ef4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x172ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172ef8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172efc: 0xac2509d8  sw          $a1, 0x9D8($at)
    ctx->pc = 0x172efcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2520), GPR_U32(ctx, 5));
    // 0x172f00: 0x3c0c003a  lui         $t4, 0x3A
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)58 << 16));
    // 0x172f04: 0x3c0a003a  lui         $t2, 0x3A
    ctx->pc = 0x172f04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)58 << 16));
    // 0x172f08: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x172f0c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172f10: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x172f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x172f14: 0x258c0a80  addiu       $t4, $t4, 0xA80
    ctx->pc = 0x172f14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2688));
    // 0x172f18: 0x266b0006  addiu       $t3, $s3, 0x6
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x172f1c: 0x254a0f80  addiu       $t2, $t2, 0xF80
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3968));
label_172f20:
    // 0x172f20: 0x1632821  addu        $a1, $t3, $v1
    ctx->pc = 0x172f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x172f24: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x172f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172f28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x172f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f2c: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x172f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x172f30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x172f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f34: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x172f34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172f38: 0x1847821  addu        $t7, $t4, $a0
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x172f3c: 0x0  nop
    ctx->pc = 0x172f3cu;
    // NOP
label_172f40:
    // 0x172f40: 0x1302823  subu        $a1, $t1, $s0
    ctx->pc = 0x172f40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x172f44: 0xae2807  srav        $a1, $t6, $a1
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 5) & 0x1F));
    // 0x172f48: 0x30ad0003  andi        $t5, $a1, 0x3
    ctx->pc = 0x172f48u;
    SET_GPR_VEC(ctx, 13, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)3u)));
    // 0x172f4c: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x172F4Cu;
    {
        const bool branch_taken_0x172f4c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f4c) {
            ctx->pc = 0x172F68u;
            goto label_172f68;
        }
    }
    ctx->pc = 0x172F54u;
    // 0x172f54: 0x91e50000  lbu         $a1, 0x0($t7)
    ctx->pc = 0x172f54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x172f58: 0x14a80003  bne         $a1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x172F58u;
    {
        const bool branch_taken_0x172f58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x172f58) {
            ctx->pc = 0x172F68u;
            goto label_172f68;
        }
    }
    ctx->pc = 0x172F60u;
    // 0x172f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172F60u;
    {
        const bool branch_taken_0x172f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F60u;
            // 0x172f64: 0xa1e70000  sb          $a3, 0x0($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f60) {
            ctx->pc = 0x172F70u;
            goto label_172f70;
        }
    }
    ctx->pc = 0x172F68u;
label_172f68:
    // 0x172f68: 0xa1ed0000  sb          $t5, 0x0($t7)
    ctx->pc = 0x172f68u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x172f6c: 0x0  nop
    ctx->pc = 0x172f6cu;
    // NOP
label_172f70:
    // 0x172f70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x172f70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x172f74: 0x2a250010  slti        $a1, $s1, 0x10
    ctx->pc = 0x172f74u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x172f78: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x172f7c: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x172F7Cu;
    {
        const bool branch_taken_0x172f7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x172F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F7Cu;
            // 0x172f80: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f7c) {
            ctx->pc = 0x172F40u;
            goto label_172f40;
        }
    }
    ctx->pc = 0x172F84u;
    // 0x172f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x172f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x172f88: 0x28650003  slti        $a1, $v1, 0x3
    ctx->pc = 0x172f88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x172f8c: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x172F8Cu;
    {
        const bool branch_taken_0x172f8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x172F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172F8Cu;
            // 0x172f90: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172f8c) {
            ctx->pc = 0x172F20u;
            goto label_172f20;
        }
    }
    ctx->pc = 0x172F94u;
    // 0x172f94: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172f98: 0x3c09003a  lui         $t1, 0x3A
    ctx->pc = 0x172f98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)58 << 16));
    // 0x172f9c: 0x24630fa4  addiu       $v1, $v1, 0xFA4
    ctx->pc = 0x172f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4004));
    // 0x172fa0: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x172fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x172fa4: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x172fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172fa8: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x172fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x172fac: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x172facu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x172fb0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172fb4: 0x24630fa8  addiu       $v1, $v1, 0xFA8
    ctx->pc = 0x172fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4008));
    // 0x172fb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172fbc: 0x665021  addu        $t2, $v1, $a2
    ctx->pc = 0x172fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172fc0: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x172fc4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x172fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x172fc8: 0x25290c80  addiu       $t1, $t1, 0xC80
    ctx->pc = 0x172fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3200));
    // 0x172fcc: 0x24630fac  addiu       $v1, $v1, 0xFAC
    ctx->pc = 0x172fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4012));
    // 0x172fd0: 0x25080c50  addiu       $t0, $t0, 0xC50
    ctx->pc = 0x172fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3152));
    // 0x172fd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x172fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x172fd8: 0x24e70bf0  addiu       $a3, $a3, 0xBF0
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3056));
    // 0x172fdc: 0xac2b0a18  sw          $t3, 0xA18($at)
    ctx->pc = 0x172fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2584), GPR_U32(ctx, 11));
    // 0x172fe0: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x172fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x172fe4: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x172fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x172fe8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x172fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ff0: 0x24c60c20  addiu       $a2, $a2, 0xC20
    ctx->pc = 0x172ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3104));
    // 0x172ff4: 0xac2a0ca8  sw          $t2, 0xCA8($at)
    ctx->pc = 0x172ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3240), GPR_U32(ctx, 10));
    // 0x172ff8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x172ffc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x172ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173000: 0xac230a20  sw          $v1, 0xA20($at)
    ctx->pc = 0x173000u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2592), GPR_U32(ctx, 3));
    // 0x173004: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173008: 0x24630f80  addiu       $v1, $v1, 0xF80
    ctx->pc = 0x173008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3968));
    // 0x17300c: 0x0  nop
    ctx->pc = 0x17300cu;
    // NOP
label_173010:
    // 0x173010: 0x855021  addu        $t2, $a0, $a1
    ctx->pc = 0x173010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x173014: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x173014u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x173018: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x173018u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17301c: 0x6b7821  addu        $t7, $v1, $t3
    ctx->pc = 0x17301cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x173020: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x173020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x173024: 0x8dec0000  lw          $t4, 0x0($t7)
    ctx->pc = 0x173024u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x173028: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x173028u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x17302c: 0x6a7021  addu        $t6, $v1, $t2
    ctx->pc = 0x17302cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x173030: 0x24aa0002  addiu       $t2, $a1, 0x2
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x173034: 0x8a5021  addu        $t2, $a0, $t2
    ctx->pc = 0x173034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x173038: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x17303c: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x17303cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x173040: 0x6b6821  addu        $t5, $v1, $t3
    ctx->pc = 0x173040u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x173044: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x173044u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x173048: 0x8deb0024  lw          $t3, 0x24($t7)
    ctx->pc = 0x173048u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 36)));
    // 0x17304c: 0x28aa0009  slti        $t2, $a1, 0x9
    ctx->pc = 0x17304cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x173050: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x173050u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x173054: 0x8deb0048  lw          $t3, 0x48($t7)
    ctx->pc = 0x173054u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x173058: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x173058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x17305c: 0x8deb006c  lw          $t3, 0x6C($t7)
    ctx->pc = 0x17305cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 108)));
    // 0x173060: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x173060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x173064: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x173064u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x173068: 0xad2b0004  sw          $t3, 0x4($t1)
    ctx->pc = 0x173068u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 11));
    // 0x17306c: 0x8dcb0024  lw          $t3, 0x24($t6)
    ctx->pc = 0x17306cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 36)));
    // 0x173070: 0xad0b0004  sw          $t3, 0x4($t0)
    ctx->pc = 0x173070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 11));
    // 0x173074: 0x8dcb0048  lw          $t3, 0x48($t6)
    ctx->pc = 0x173074u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x173078: 0xaceb0004  sw          $t3, 0x4($a3)
    ctx->pc = 0x173078u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 11));
    // 0x17307c: 0x8dcb006c  lw          $t3, 0x6C($t6)
    ctx->pc = 0x17307cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 108)));
    // 0x173080: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x173080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x173084: 0x8dab0000  lw          $t3, 0x0($t5)
    ctx->pc = 0x173084u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x173088: 0xad2b0008  sw          $t3, 0x8($t1)
    ctx->pc = 0x173088u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 11));
    // 0x17308c: 0x8dab0024  lw          $t3, 0x24($t5)
    ctx->pc = 0x17308cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 36)));
    // 0x173090: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x173090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x173094: 0xad0b0008  sw          $t3, 0x8($t0)
    ctx->pc = 0x173094u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 11));
    // 0x173098: 0x8dab0048  lw          $t3, 0x48($t5)
    ctx->pc = 0x173098u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x17309c: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x1730a0: 0xaceb0008  sw          $t3, 0x8($a3)
    ctx->pc = 0x1730a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 11));
    // 0x1730a4: 0x8dab006c  lw          $t3, 0x6C($t5)
    ctx->pc = 0x1730a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 108)));
    // 0x1730a8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1730a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1730ac: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x1730acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x1730b0: 0x1540ffd7  bnez        $t2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1730B0u;
    {
        const bool branch_taken_0x1730b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1730B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730B0u;
            // 0x1730b4: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730b0) {
            ctx->pc = 0x173010u;
            goto label_173010;
        }
    }
    ctx->pc = 0x1730B8u;
    // 0x1730b8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1730b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1730bc: 0x2485002f  addiu       $a1, $a0, 0x2F
    ctx->pc = 0x1730bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 47));
    // 0x1730c0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1730c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1730c4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1730c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1730c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1730cc: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x1730d0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1730d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1730d4: 0x24c60f84  addiu       $a2, $a2, 0xF84
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3972));
    // 0x1730d8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x1730d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1730dc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x1730dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x1730e0: 0xac270be8  sw          $a3, 0xBE8($at)
    ctx->pc = 0x1730e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3048), GPR_U32(ctx, 7));
    // 0x1730e4: 0x24630f88  addiu       $v1, $v1, 0xF88
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x1730e8: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x1730e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1730ec: 0x647021  addu        $t6, $v1, $a0
    ctx->pc = 0x1730ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1730f0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1730f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1730f4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x1730f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x1730f8: 0x24630f8c  addiu       $v1, $v1, 0xF8C
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3980));
    // 0x1730fc: 0x646821  addu        $t5, $v1, $a0
    ctx->pc = 0x1730fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173100: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173104: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x173108: 0xac2f0be0  sw          $t7, 0xBE0($at)
    ctx->pc = 0x173108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3040), GPR_U32(ctx, 15));
    // 0x17310c: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173110: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173114: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173118: 0x24630f94  addiu       $v1, $v1, 0xF94
    ctx->pc = 0x173118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3988));
    // 0x17311c: 0x645821  addu        $t3, $v1, $a0
    ctx->pc = 0x17311cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173120: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173124: 0x24630f98  addiu       $v1, $v1, 0xF98
    ctx->pc = 0x173124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3992));
    // 0x173128: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x173128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17312c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173130: 0x24630f9c  addiu       $v1, $v1, 0xF9C
    ctx->pc = 0x173130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3996));
    // 0x173134: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x173134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173138: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x17313c: 0x24630fa0  addiu       $v1, $v1, 0xFA0
    ctx->pc = 0x17313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x173140: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x173140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173144: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173148: 0x24630fa4  addiu       $v1, $v1, 0xFA4
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4004));
    // 0x17314c: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173150: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173154: 0x24630fa8  addiu       $v1, $v1, 0xFA8
    ctx->pc = 0x173154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4008));
    // 0x173158: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x173158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17315c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x17315cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173160: 0x24630fac  addiu       $v1, $v1, 0xFAC
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4012));
    // 0x173164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173168: 0x8dc40000  lw          $a0, 0x0($t6)
    ctx->pc = 0x173168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x17316c: 0xac240a58  sw          $a0, 0xA58($at)
    ctx->pc = 0x17316cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2648), GPR_U32(ctx, 4));
    // 0x173170: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x173170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x173174: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173178: 0x46a02  srl         $t5, $a0, 8
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x17317c: 0xac2da018  sw          $t5, -0x5FE8($at)
    ctx->pc = 0x17317cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942744), GPR_U32(ctx, 13));
    // 0x173180: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x173180u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)255u)));
    // 0x173184: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173188: 0xac240a50  sw          $a0, 0xA50($at)
    ctx->pc = 0x173188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2640), GPR_U32(ctx, 4));
    // 0x17318c: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x17318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x173190: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173194: 0xac240a48  sw          $a0, 0xA48($at)
    ctx->pc = 0x173194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2632), GPR_U32(ctx, 4));
    // 0x173198: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x173198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x17319c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x17319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731a0: 0xac240a40  sw          $a0, 0xA40($at)
    ctx->pc = 0x1731a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2624), GPR_U32(ctx, 4));
    // 0x1731a4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1731a8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731ac: 0xac240bd8  sw          $a0, 0xBD8($at)
    ctx->pc = 0x1731acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3032), GPR_U32(ctx, 4));
    // 0x1731b0: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1731b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1731b4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731b8: 0xac240bd0  sw          $a0, 0xBD0($at)
    ctx->pc = 0x1731b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3024), GPR_U32(ctx, 4));
    // 0x1731bc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1731bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1731c0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731c4: 0xac2409f8  sw          $a0, 0x9F8($at)
    ctx->pc = 0x1731c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2552), GPR_U32(ctx, 4));
    // 0x1731c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1731c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1731cc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731d0: 0xac2409f0  sw          $a0, 0x9F0($at)
    ctx->pc = 0x1731d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2544), GPR_U32(ctx, 4));
    // 0x1731d4: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x1731d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1731d8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731dc: 0x30e60001  andi        $a2, $a3, 0x1
    ctx->pc = 0x1731dcu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)1u)));
    // 0x1731e0: 0x72042  srl         $a0, $a3, 1
    ctx->pc = 0x1731e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x1731e4: 0xa0260a28  sb          $a2, 0xA28($at)
    ctx->pc = 0x1731e4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2600), (uint8_t)GPR_U32(ctx, 6));
    // 0x1731e8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1731e8u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x1731ec: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731f0: 0xa0240a30  sb          $a0, 0xA30($at)
    ctx->pc = 0x1731f0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2608), (uint8_t)GPR_U32(ctx, 4));
    // 0x1731f4: 0x72082  srl         $a0, $a3, 2
    ctx->pc = 0x1731f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x1731f8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1731f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1731fc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x1731fcu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x173200: 0xa0240a38  sb          $a0, 0xA38($at)
    ctx->pc = 0x173200u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 2616), (uint8_t)GPR_U32(ctx, 4));
    // 0x173204: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173208: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x17320c: 0xac230a60  sw          $v1, 0xA60($at)
    ctx->pc = 0x17320cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2656), GPR_U32(ctx, 3));
    // 0x173210: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173214: 0xac250ad0  sw          $a1, 0xAD0($at)
    ctx->pc = 0x173214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2768), GPR_U32(ctx, 5));
label_173218:
    // 0x173218: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x173218u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17321c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x17321cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x173220: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x173220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x173224: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x173224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173228: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x173228u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17322c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17322cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173230: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173230u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17323c: 0x3e00008  jr          $ra
    ctx->pc = 0x17323Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17323Cu;
            // 0x173240: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172C78u: goto label_172c78;
            case 0x172C88u: goto label_172c88;
            case 0x172C98u: goto label_172c98;
            case 0x172D28u: goto label_172d28;
            case 0x172D58u: goto label_172d58;
            case 0x172D60u: goto label_172d60;
            case 0x172D90u: goto label_172d90;
            case 0x172E00u: goto label_172e00;
            case 0x172E08u: goto label_172e08;
            case 0x172E28u: goto label_172e28;
            case 0x172E40u: goto label_172e40;
            case 0x172E58u: goto label_172e58;
            case 0x172E68u: goto label_172e68;
            case 0x172F20u: goto label_172f20;
            case 0x172F40u: goto label_172f40;
            case 0x172F68u: goto label_172f68;
            case 0x172F70u: goto label_172f70;
            case 0x173010u: goto label_173010;
            case 0x173218u: goto label_173218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173244u;
}
