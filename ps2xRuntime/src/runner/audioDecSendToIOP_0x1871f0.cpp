#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecSendToIOP
// Address: 0x1871f0 - 0x1873ac
void audioDecSendToIOP_0x1871f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecSendToIOP_0x1871f0");
#endif

    ctx->pc = 0x1871f0u;

    // 0x1871f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1871f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1871f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1871f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1871f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1871fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1871fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187204: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187208: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18720c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x18720Cu;
    {
        const bool branch_taken_0x18720c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x187210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18720Cu;
            // 0x187210: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18720c) {
            ctx->pc = 0x1872C0u;
            goto label_1872c0;
        }
    }
    ctx->pc = 0x187214u;
    // 0x187214: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187218: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x187218u;
    {
        const bool branch_taken_0x187218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18721Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187218u;
            // 0x18721c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187218) {
            ctx->pc = 0x187280u;
            goto label_187280;
        }
    }
    ctx->pc = 0x187220u;
    // 0x187220: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x187220u;
    {
        const bool branch_taken_0x187220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x187220) {
            ctx->pc = 0x187240u;
            goto label_187240;
        }
    }
    ctx->pc = 0x187228u;
    // 0x187228: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187228u;
    {
        const bool branch_taken_0x187228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187228) {
            ctx->pc = 0x187238u;
            goto label_187238;
        }
    }
    ctx->pc = 0x187230u;
    // 0x187230: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x187230u;
    {
        const bool branch_taken_0x187230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187230) {
            ctx->pc = 0x1872C8u;
            goto label_1872c8;
        }
    }
    ctx->pc = 0x187238u;
label_187238:
    // 0x187238: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x187238u;
    {
        const bool branch_taken_0x187238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18723Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187238u;
            // 0x18723c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187238) {
            ctx->pc = 0x187398u;
            goto label_187398;
        }
    }
    ctx->pc = 0x187240u;
label_187240:
    // 0x187240: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x187244: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x187244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x187248: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x187248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x18724c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x18724cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x187250: 0x0  nop
    ctx->pc = 0x187250u;
    // NOP
    // 0x187254: 0x0  nop
    ctx->pc = 0x187254u;
    // NOP
    // 0x187258: 0x1810  mfhi        $v1
    ctx->pc = 0x187258u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x18725c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187260: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x187260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x187264: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x187268: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x187268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x18726c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x187270: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x187270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x187274: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x187274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x187278: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187278u;
    {
        const bool branch_taken_0x187278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18727Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187278u;
            // 0x18727c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187278) {
            ctx->pc = 0x1872C8u;
            goto label_1872c8;
        }
    }
    ctx->pc = 0x187280u;
label_187280:
    // 0x187280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187284: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x187284u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33024u)));
    // 0x187288: 0xc04b5b2  jal         func_12D6C8
    ctx->pc = 0x187288u;
    SET_GPR_U32(ctx, 31, 0x187290u);
    ctx->pc = 0x18728Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187288u;
            // 0x18728c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D6C8u;
    if (runtime->hasFunction(0x12D6C8u)) {
        auto targetFn = runtime->lookupFunction(0x12D6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187290u; }
        if (ctx->pc != 0x187290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x12d6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187290u; }
        if (ctx->pc != 0x187290u) { return; }
    }
    ctx->pc = 0x187290u;
    // 0x187290: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x187290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x187294: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x187294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x187298: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x18729c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x18729cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x1872a0: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1872a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1872a4: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1872a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1872a8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1872a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1872ac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1872acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872b0: 0xc061c50  jal         func_187140
    ctx->pc = 0x1872B0u;
    SET_GPR_U32(ctx, 31, 0x1872B8u);
    ctx->pc = 0x1872B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1872B0u;
            // 0x1872b4: 0x624823  subu        $t1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187140u;
    if (runtime->hasFunction(0x187140u)) {
        auto targetFn = runtime->lookupFunction(0x187140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872B8u; }
        if (ctx->pc != 0x1872B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iopGetArea_0x187140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872B8u; }
        if (ctx->pc != 0x1872B8u) { return; }
    }
    ctx->pc = 0x1872B8u;
    // 0x1872b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1872B8u;
    {
        const bool branch_taken_0x1872b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872b8) {
            ctx->pc = 0x1872C8u;
            goto label_1872c8;
        }
    }
    ctx->pc = 0x1872C0u;
label_1872c0:
    // 0x1872c0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1872C0u;
    {
        const bool branch_taken_0x1872c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872C0u;
            // 0x1872c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872c0) {
            ctx->pc = 0x187398u;
            goto label_187398;
        }
    }
    ctx->pc = 0x1872C8u;
label_1872c8:
    // 0x1872c8: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x1872c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1872cc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1872ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1872d0: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x1872d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1872d4: 0x8e2a0030  lw          $t2, 0x30($s1)
    ctx->pc = 0x1872d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1872d8: 0x41283  sra         $v0, $a0, 10
    ctx->pc = 0x1872d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 10));
    // 0x1872dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1872dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1872e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1872e4: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1872e4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1872e8: 0x0  nop
    ctx->pc = 0x1872e8u;
    // NOP
    // 0x1872ec: 0x0  nop
    ctx->pc = 0x1872ecu;
    // NOP
    // 0x1872f0: 0x1810  mfhi        $v1
    ctx->pc = 0x1872f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1872f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1872F4u;
    {
        const bool branch_taken_0x1872f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1872F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872F4u;
            // 0x1872f8: 0x1434021  addu        $t0, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872f4) {
            ctx->pc = 0x187304u;
            goto label_187304;
        }
    }
    ctx->pc = 0x1872FCu;
    // 0x1872fc: 0x248203ff  addiu       $v0, $a0, 0x3FF
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x187300: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x187300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
label_187304:
    // 0x187304: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x187308: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x18730c: 0x484823  subu        $t1, $v0, $t0
    ctx->pc = 0x18730cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x187310: 0x69082a  slt         $at, $v1, $t1
    ctx->pc = 0x187310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x187314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x187314u;
    {
        const bool branch_taken_0x187314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187314) {
            ctx->pc = 0x187320u;
            goto label_187320;
        }
    }
    ctx->pc = 0x18731Cu;
    // 0x18731c: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x18731cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_187320:
    // 0x187320: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187324: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x187328: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x18732c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x18732cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x187330: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187330u;
    {
        const bool branch_taken_0x187330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187330u;
            // 0x187334: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187330) {
            ctx->pc = 0x187358u;
            goto label_187358;
        }
    }
    ctx->pc = 0x187338u;
    // 0x187338: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x18733c: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x18733cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x187340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187340u;
    {
        const bool branch_taken_0x187340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187340) {
            ctx->pc = 0x187358u;
            goto label_187358;
        }
    }
    ctx->pc = 0x187348u;
    // 0x187348: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x187348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18734c: 0xc061bf8  jal         func_186FE0
    ctx->pc = 0x18734Cu;
    SET_GPR_U32(ctx, 31, 0x187354u);
    ctx->pc = 0x187350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18734Cu;
            // 0x187350: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186FE0u;
    if (runtime->hasFunction(0x186FE0u)) {
        auto targetFn = runtime->lookupFunction(0x186FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187354u; }
        if (ctx->pc != 0x187354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP2area_0x186fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187354u; }
        if (ctx->pc != 0x187354u) { return; }
    }
    ctx->pc = 0x187354u;
    // 0x187354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187358:
    // 0x187358: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x18735c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18735cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187360: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187364: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x187364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x187368: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x187368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x18736c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x18736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x187370: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x187370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x187374: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x187378: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x18737c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x187380: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x187380u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x187384: 0x0  nop
    ctx->pc = 0x187384u;
    // NOP
    // 0x187388: 0x0  nop
    ctx->pc = 0x187388u;
    // NOP
    // 0x18738c: 0x1810  mfhi        $v1
    ctx->pc = 0x18738cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x187390: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x187390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x187394: 0x0  nop
    ctx->pc = 0x187394u;
    // NOP
label_187398:
    // 0x187398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18739c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18739cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1873a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1873a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1873A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873A4u;
            // 0x1873a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187238u: goto label_187238;
            case 0x187240u: goto label_187240;
            case 0x187280u: goto label_187280;
            case 0x1872C0u: goto label_1872c0;
            case 0x1872C8u: goto label_1872c8;
            case 0x187304u: goto label_187304;
            case 0x187320u: goto label_187320;
            case 0x187358u: goto label_187358;
            case 0x187398u: goto label_187398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1873ACu;
}
