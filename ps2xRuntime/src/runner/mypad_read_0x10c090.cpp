#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: mypad_read
// Address: 0x10c090 - 0x10c3e4
void mypad_read_0x10c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mypad_read_0x10c090");
#endif

    ctx->pc = 0x10c090u;

    // 0x10c090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10c094: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10c098: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10c09c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10c09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0a0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10c0a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10c0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10c0ac: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x10c0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x10c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x10c0b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10c0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0b8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10c0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10c0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10c0c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x10c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x10c0cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x10c0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0d0: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x10C0D0u;
    SET_GPR_U32(ctx, 31, 0x10C0D8u);
    ctx->pc = 0x10C0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0D0u;
            // 0x10c0d4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0D8u; }
        if (ctx->pc != 0x10C0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0D8u; }
        if (ctx->pc != 0x10C0D8u) { return; }
    }
    ctx->pc = 0x10C0D8u;
    // 0x10c0d8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C0D8u;
    {
        const bool branch_taken_0x10c0d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10C0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0D8u;
            // 0x10c0dc: 0x93a20002  lbu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0d8) {
            ctx->pc = 0x10C0F0u;
            goto label_10c0f0;
        }
    }
    ctx->pc = 0x10C0E0u;
    // 0x10c0e0: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x10c0e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x10c0e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x10c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x10c0e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10c0e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10c0ec: 0x38530fff  xori        $s3, $v0, 0xFFF
    ctx->pc = 0x10c0ecu;
    SET_GPR_VEC(ctx, 19, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4095u)));
label_10c0f0:
    // 0x10c0f0: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x10c0f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x10c0f4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10c0f8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x10c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x10c0fc: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x10C0FCu;
    {
        const bool branch_taken_0x10c0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0FCu;
            // 0x10c100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0fc) {
            ctx->pc = 0x10C248u;
            goto label_10c248;
        }
    }
    ctx->pc = 0x10C104u;
    // 0x10c104: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x10c104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x10c108: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c10c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C10Cu;
    {
        const bool branch_taken_0x10c10c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C10Cu;
            // 0x10c110: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c10c) {
            ctx->pc = 0x10C118u;
            goto label_10c118;
        }
    }
    ctx->pc = 0x10C114u;
    // 0x10c114: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c118:
    // 0x10c118: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C11Cu;
    {
        const bool branch_taken_0x10c11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c11c) {
            ctx->pc = 0x10C12Cu;
            goto label_10c12c;
        }
    }
    ctx->pc = 0x10C124u;
    // 0x10c124: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C124u;
    {
        const bool branch_taken_0x10c124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C124u;
            // 0x10c128: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c124) {
            ctx->pc = 0x10C148u;
            goto label_10c148;
        }
    }
    ctx->pc = 0x10C12Cu;
label_10c12c:
    // 0x10c12c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C12Cu;
    {
        const bool branch_taken_0x10c12c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C12Cu;
            // 0x10c130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c12c) {
            ctx->pc = 0x10C13Cu;
            goto label_10c13c;
        }
    }
    ctx->pc = 0x10C134u;
    // 0x10c134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C134u;
    {
        const bool branch_taken_0x10c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C134u;
            // 0x10c138: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c134) {
            ctx->pc = 0x10C148u;
            goto label_10c148;
        }
    }
    ctx->pc = 0x10C13Cu;
label_10c13c:
    // 0x10c13c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c140: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c144: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c144u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c148:
    // 0x10c148: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c14c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c150: 0x93a40006  lbu         $a0, 0x6($sp)
    ctx->pc = 0x10c150u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x10c154: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10c154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10c158: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c15c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C15Cu;
    {
        const bool branch_taken_0x10c15c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C15Cu;
            // 0x10c160: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c15c) {
            ctx->pc = 0x10C168u;
            goto label_10c168;
        }
    }
    ctx->pc = 0x10C164u;
    // 0x10c164: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c168:
    // 0x10c168: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c16c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C16Cu;
    {
        const bool branch_taken_0x10c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c16c) {
            ctx->pc = 0x10C17Cu;
            goto label_10c17c;
        }
    }
    ctx->pc = 0x10C174u;
    // 0x10c174: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C174u;
    {
        const bool branch_taken_0x10c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C174u;
            // 0x10c178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c174) {
            ctx->pc = 0x10C198u;
            goto label_10c198;
        }
    }
    ctx->pc = 0x10C17Cu;
label_10c17c:
    // 0x10c17c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C17Cu;
    {
        const bool branch_taken_0x10c17c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C17Cu;
            // 0x10c180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c17c) {
            ctx->pc = 0x10C18Cu;
            goto label_10c18c;
        }
    }
    ctx->pc = 0x10C184u;
    // 0x10c184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C184u;
    {
        const bool branch_taken_0x10c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C184u;
            // 0x10c188: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c184) {
            ctx->pc = 0x10C198u;
            goto label_10c198;
        }
    }
    ctx->pc = 0x10C18Cu;
label_10c18c:
    // 0x10c18c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c190: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c194: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c194u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c198:
    // 0x10c198: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c1a0: 0x93a40005  lbu         $a0, 0x5($sp)
    ctx->pc = 0x10c1a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x10c1a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10c1a8: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c1ac: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C1ACu;
    {
        const bool branch_taken_0x10c1ac = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1ACu;
            // 0x10c1b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1ac) {
            ctx->pc = 0x10C1B8u;
            goto label_10c1b8;
        }
    }
    ctx->pc = 0x10C1B4u;
    // 0x10c1b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c1b8:
    // 0x10c1b8: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c1bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1BCu;
    {
        const bool branch_taken_0x10c1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1bc) {
            ctx->pc = 0x10C1CCu;
            goto label_10c1cc;
        }
    }
    ctx->pc = 0x10C1C4u;
    // 0x10c1c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C1C4u;
    {
        const bool branch_taken_0x10c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1C4u;
            // 0x10c1c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1c4) {
            ctx->pc = 0x10C1E8u;
            goto label_10c1e8;
        }
    }
    ctx->pc = 0x10C1CCu;
label_10c1cc:
    // 0x10c1cc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1CCu;
    {
        const bool branch_taken_0x10c1cc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1CCu;
            // 0x10c1d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1cc) {
            ctx->pc = 0x10C1DCu;
            goto label_10c1dc;
        }
    }
    ctx->pc = 0x10C1D4u;
    // 0x10c1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C1D4u;
    {
        const bool branch_taken_0x10c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1D4u;
            // 0x10c1d8: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1d4) {
            ctx->pc = 0x10C1E8u;
            goto label_10c1e8;
        }
    }
    ctx->pc = 0x10C1DCu;
label_10c1dc:
    // 0x10c1dc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c1e0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c1e4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c1e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c1e8:
    // 0x10c1e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10c1ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c1f0: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x10c1f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c1f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10c1f8: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c1fc: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C1FCu;
    {
        const bool branch_taken_0x10c1fc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1FCu;
            // 0x10c200: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1fc) {
            ctx->pc = 0x10C208u;
            goto label_10c208;
        }
    }
    ctx->pc = 0x10C204u;
    // 0x10c204: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c208:
    // 0x10c208: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c20c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C20Cu;
    {
        const bool branch_taken_0x10c20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c20c) {
            ctx->pc = 0x10C21Cu;
            goto label_10c21c;
        }
    }
    ctx->pc = 0x10C214u;
    // 0x10c214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C214u;
    {
        const bool branch_taken_0x10c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C214u;
            // 0x10c218: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c214) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C21Cu;
label_10c21c:
    // 0x10c21c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C21Cu;
    {
        const bool branch_taken_0x10c21c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C21Cu;
            // 0x10c220: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c21c) {
            ctx->pc = 0x10C22Cu;
            goto label_10c22c;
        }
    }
    ctx->pc = 0x10C224u;
    // 0x10c224: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C224u;
    {
        const bool branch_taken_0x10c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C224u;
            // 0x10c228: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c224) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C22Cu;
label_10c22c:
    // 0x10c22c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c230: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c234: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c234u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c238:
    // 0x10c238: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c23c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c240: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10c240u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10c244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c248:
    // 0x10c248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10c248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c24c: 0xc0458fe  jal         func_1163F8
    ctx->pc = 0x10C24Cu;
    SET_GPR_U32(ctx, 31, 0x10C254u);
    ctx->pc = 0x10C250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C24Cu;
            // 0x10c250: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163F8u;
    if (runtime->hasFunction(0x1163F8u)) {
        auto targetFn = runtime->lookupFunction(0x1163F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C254u; }
        if (ctx->pc != 0x10C254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C254u; }
        if (ctx->pc != 0x10C254u) { return; }
    }
    ctx->pc = 0x10C254u;
    // 0x10c254: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C254u;
    {
        const bool branch_taken_0x10c254 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C254u;
            // 0x10c258: 0x93a20002  lbu         $v0, 0x2($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c254) {
            ctx->pc = 0x10C270u;
            goto label_10c270;
        }
    }
    ctx->pc = 0x10C25Cu;
    // 0x10c25c: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x10c25cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x10c260: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x10c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x10c264: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10c264u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10c268: 0x3842ffff  xori        $v0, $v0, 0xFFFF
    ctx->pc = 0x10c268u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x10c26c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x10c26cu;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 2)));
label_10c270:
    // 0x10c270: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x10c270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x10c274: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x10c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10c278: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x10c27c: 0x14430052  bne         $v0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x10C27Cu;
    {
        const bool branch_taken_0x10c27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C27Cu;
            // 0x10c280: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c27c) {
            ctx->pc = 0x10C3C8u;
            goto label_10c3c8;
        }
    }
    ctx->pc = 0x10C284u;
    // 0x10c284: 0x93a40007  lbu         $a0, 0x7($sp)
    ctx->pc = 0x10c284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x10c288: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c28c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C28Cu;
    {
        const bool branch_taken_0x10c28c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C28Cu;
            // 0x10c290: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c28c) {
            ctx->pc = 0x10C298u;
            goto label_10c298;
        }
    }
    ctx->pc = 0x10C294u;
    // 0x10c294: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c294u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c298:
    // 0x10c298: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c29c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C29Cu;
    {
        const bool branch_taken_0x10c29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c29c) {
            ctx->pc = 0x10C2ACu;
            goto label_10c2ac;
        }
    }
    ctx->pc = 0x10C2A4u;
    // 0x10c2a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C2A4u;
    {
        const bool branch_taken_0x10c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2A4u;
            // 0x10c2a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2a4) {
            ctx->pc = 0x10C2C8u;
            goto label_10c2c8;
        }
    }
    ctx->pc = 0x10C2ACu;
label_10c2ac:
    // 0x10c2ac: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C2ACu;
    {
        const bool branch_taken_0x10c2ac = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2ACu;
            // 0x10c2b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2ac) {
            ctx->pc = 0x10C2BCu;
            goto label_10c2bc;
        }
    }
    ctx->pc = 0x10C2B4u;
    // 0x10c2b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C2B4u;
    {
        const bool branch_taken_0x10c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2B4u;
            // 0x10c2b8: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b4) {
            ctx->pc = 0x10C2C8u;
            goto label_10c2c8;
        }
    }
    ctx->pc = 0x10C2BCu;
label_10c2bc:
    // 0x10c2bc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c2c0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c2c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c2c4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c2c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c2c8:
    // 0x10c2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c2cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c2d0: 0x93a40006  lbu         $a0, 0x6($sp)
    ctx->pc = 0x10c2d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x10c2d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10c2d8: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c2dc: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C2DCu;
    {
        const bool branch_taken_0x10c2dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2DCu;
            // 0x10c2e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2dc) {
            ctx->pc = 0x10C2E8u;
            goto label_10c2e8;
        }
    }
    ctx->pc = 0x10C2E4u;
    // 0x10c2e4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c2e8:
    // 0x10c2e8: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c2ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C2ECu;
    {
        const bool branch_taken_0x10c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c2ec) {
            ctx->pc = 0x10C2FCu;
            goto label_10c2fc;
        }
    }
    ctx->pc = 0x10C2F4u;
    // 0x10c2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C2F4u;
    {
        const bool branch_taken_0x10c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2F4u;
            // 0x10c2f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2f4) {
            ctx->pc = 0x10C318u;
            goto label_10c318;
        }
    }
    ctx->pc = 0x10C2FCu;
label_10c2fc:
    // 0x10c2fc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C2FCu;
    {
        const bool branch_taken_0x10c2fc = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C2FCu;
            // 0x10c300: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2fc) {
            ctx->pc = 0x10C30Cu;
            goto label_10c30c;
        }
    }
    ctx->pc = 0x10C304u;
    // 0x10c304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C304u;
    {
        const bool branch_taken_0x10c304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C304u;
            // 0x10c308: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c304) {
            ctx->pc = 0x10C318u;
            goto label_10c318;
        }
    }
    ctx->pc = 0x10C30Cu;
label_10c30c:
    // 0x10c30c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c310: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c314: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c314u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c318:
    // 0x10c318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c31c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c320: 0x93a40005  lbu         $a0, 0x5($sp)
    ctx->pc = 0x10c320u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x10c324: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10c324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10c328: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c32c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C32Cu;
    {
        const bool branch_taken_0x10c32c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C32Cu;
            // 0x10c330: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c32c) {
            ctx->pc = 0x10C338u;
            goto label_10c338;
        }
    }
    ctx->pc = 0x10C334u;
    // 0x10c334: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c334u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c338:
    // 0x10c338: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c33c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C33Cu;
    {
        const bool branch_taken_0x10c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c33c) {
            ctx->pc = 0x10C34Cu;
            goto label_10c34c;
        }
    }
    ctx->pc = 0x10C344u;
    // 0x10c344: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C344u;
    {
        const bool branch_taken_0x10c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C344u;
            // 0x10c348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c344) {
            ctx->pc = 0x10C368u;
            goto label_10c368;
        }
    }
    ctx->pc = 0x10C34Cu;
label_10c34c:
    // 0x10c34c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C34Cu;
    {
        const bool branch_taken_0x10c34c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C34Cu;
            // 0x10c350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c34c) {
            ctx->pc = 0x10C35Cu;
            goto label_10c35c;
        }
    }
    ctx->pc = 0x10C354u;
    // 0x10c354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C354u;
    {
        const bool branch_taken_0x10c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C354u;
            // 0x10c358: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c354) {
            ctx->pc = 0x10C368u;
            goto label_10c368;
        }
    }
    ctx->pc = 0x10C35Cu;
label_10c35c:
    // 0x10c35c: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c360: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c364: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c364u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c368:
    // 0x10c368: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x10c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10c36c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c370: 0x93a40004  lbu         $a0, 0x4($sp)
    ctx->pc = 0x10c370u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c374: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x10c374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x10c378: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x10c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x10c37c: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C37Cu;
    {
        const bool branch_taken_0x10c37c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x10C380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C37Cu;
            // 0x10c380: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c37c) {
            ctx->pc = 0x10C388u;
            goto label_10c388;
        }
    }
    ctx->pc = 0x10C384u;
    // 0x10c384: 0x21023  negu        $v0, $v0
    ctx->pc = 0x10c384u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_10c388:
    // 0x10c388: 0x28420021  slti        $v0, $v0, 0x21
    ctx->pc = 0x10c388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x10c38c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C38Cu;
    {
        const bool branch_taken_0x10c38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c38c) {
            ctx->pc = 0x10C39Cu;
            goto label_10c39c;
        }
    }
    ctx->pc = 0x10C394u;
    // 0x10c394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C394u;
    {
        const bool branch_taken_0x10c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C394u;
            // 0x10c398: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c394) {
            ctx->pc = 0x10C3B8u;
            goto label_10c3b8;
        }
    }
    ctx->pc = 0x10C39Cu;
label_10c39c:
    // 0x10c39c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C39Cu;
    {
        const bool branch_taken_0x10c39c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10C3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C39Cu;
            // 0x10c3a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c39c) {
            ctx->pc = 0x10C3ACu;
            goto label_10c3ac;
        }
    }
    ctx->pc = 0x10C3A4u;
    // 0x10c3a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C3A4u;
    {
        const bool branch_taken_0x10c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3A4u;
            // 0x10c3a8: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3a4) {
            ctx->pc = 0x10C3B8u;
            goto label_10c3b8;
        }
    }
    ctx->pc = 0x10C3ACu;
label_10c3ac:
    // 0x10c3ac: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x10c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c3b0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x10c3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10c3b4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x10c3b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_10c3b8:
    // 0x10c3b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c3bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10c3c0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10c3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x10c3c4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x10c3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10c3c8:
    // 0x10c3c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x10c3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c3cc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10c3ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c3d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10c3d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c3d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10c3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c3d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10c3d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10C3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C3DCu;
            // 0x10c3e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C0F0u: goto label_10c0f0;
            case 0x10C118u: goto label_10c118;
            case 0x10C12Cu: goto label_10c12c;
            case 0x10C13Cu: goto label_10c13c;
            case 0x10C148u: goto label_10c148;
            case 0x10C168u: goto label_10c168;
            case 0x10C17Cu: goto label_10c17c;
            case 0x10C18Cu: goto label_10c18c;
            case 0x10C198u: goto label_10c198;
            case 0x10C1B8u: goto label_10c1b8;
            case 0x10C1CCu: goto label_10c1cc;
            case 0x10C1DCu: goto label_10c1dc;
            case 0x10C1E8u: goto label_10c1e8;
            case 0x10C208u: goto label_10c208;
            case 0x10C21Cu: goto label_10c21c;
            case 0x10C22Cu: goto label_10c22c;
            case 0x10C238u: goto label_10c238;
            case 0x10C248u: goto label_10c248;
            case 0x10C270u: goto label_10c270;
            case 0x10C298u: goto label_10c298;
            case 0x10C2ACu: goto label_10c2ac;
            case 0x10C2BCu: goto label_10c2bc;
            case 0x10C2C8u: goto label_10c2c8;
            case 0x10C2E8u: goto label_10c2e8;
            case 0x10C2FCu: goto label_10c2fc;
            case 0x10C30Cu: goto label_10c30c;
            case 0x10C318u: goto label_10c318;
            case 0x10C338u: goto label_10c338;
            case 0x10C34Cu: goto label_10c34c;
            case 0x10C35Cu: goto label_10c35c;
            case 0x10C368u: goto label_10c368;
            case 0x10C388u: goto label_10c388;
            case 0x10C39Cu: goto label_10c39c;
            case 0x10C3ACu: goto label_10c3ac;
            case 0x10C3B8u: goto label_10c3b8;
            case 0x10C3C8u: goto label_10c3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10C3E4u;
}
