#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecSendToIOP
// Address: 0x119ac8 - 0x119c7c
void audioDecSendToIOP_0x119ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119ac8u;

    // 0x119ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119ad0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119ad4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x119ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119ad8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x119adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ae0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x119ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x119ae4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x119AE4u;
    {
        const bool branch_taken_0x119ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AE4u;
            // 0x119ae8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ae4) {
            ctx->pc = 0x119B20u;
            goto label_119b20;
        }
    }
    ctx->pc = 0x119AECu;
    // 0x119aec: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x119af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119AF0u;
    {
        const bool branch_taken_0x119af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AF0u;
            // 0x119af4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119af0) {
            ctx->pc = 0x119B08u;
            goto label_119b08;
        }
    }
    ctx->pc = 0x119AF8u;
    // 0x119af8: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x119AF8u;
    {
        const bool branch_taken_0x119af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AF8u;
            // 0x119afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119af8) {
            ctx->pc = 0x119C68u;
            goto label_119c68;
        }
    }
    ctx->pc = 0x119B00u;
    // 0x119b00: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x119B00u;
    {
        const bool branch_taken_0x119b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B00u;
            // 0x119b04: 0x8e070038  lw          $a3, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b00) {
            ctx->pc = 0x119BA0u;
            goto label_119ba0;
        }
    }
    ctx->pc = 0x119B08u;
label_119b08:
    // 0x119b08: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x119B08u;
    {
        const bool branch_taken_0x119b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B08u;
            // 0x119b0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b08) {
            ctx->pc = 0x119B58u;
            goto label_119b58;
        }
    }
    ctx->pc = 0x119B10u;
    // 0x119b10: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x119B10u;
    {
        const bool branch_taken_0x119b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x119B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B10u;
            // 0x119b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b10) {
            ctx->pc = 0x119C68u;
            goto label_119c68;
        }
    }
    ctx->pc = 0x119B18u;
    // 0x119b18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x119B18u;
    {
        const bool branch_taken_0x119b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B18u;
            // 0x119b1c: 0x8e070038  lw          $a3, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b18) {
            ctx->pc = 0x119BA0u;
            goto label_119ba0;
        }
    }
    ctx->pc = 0x119B20u;
label_119b20:
    // 0x119b20: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x119b24: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x119b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x119b28: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119B28u;
    {
        const bool branch_taken_0x119b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119b28) {
            ctx->pc = 0x119B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119B28u;
            // 0x119b2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119B30u;
            goto label_119b30;
        }
    }
    ctx->pc = 0x119B30u;
label_119b30:
    // 0x119b30: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x119b30u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119b34: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x119b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x119b38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119b3c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x119b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x119b40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x119b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x119b44: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x119b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x119b48: 0x2810  mfhi        $a1
    ctx->pc = 0x119b48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x119b4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x119b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x119b50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x119B50u;
    {
        const bool branch_taken_0x119b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B50u;
            // 0x119b54: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b50) {
            ctx->pc = 0x119B9Cu;
            goto label_119b9c;
        }
    }
    ctx->pc = 0x119B58u;
label_119b58:
    // 0x119b58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119b5c: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x119b5cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33024u)));
    // 0x119b60: 0xc045c80  jal         func_117200
    ctx->pc = 0x119B60u;
    SET_GPR_U32(ctx, 31, 0x119B68u);
    ctx->pc = 0x119B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119B60u;
            // 0x119b64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B68u; }
        if (ctx->pc != 0x119B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B68u; }
        if (ctx->pc != 0x119B68u) { return; }
    }
    ctx->pc = 0x119B68u;
    // 0x119b68: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x119b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x119b6c: 0x8e090044  lw          $t1, 0x44($s0)
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x119b70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x119b70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x119b74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x119b78u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x119b7c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x119b7cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)4u)));
    // 0x119b80: 0x494823  subu        $t1, $v0, $t1
    ctx->pc = 0x119b80u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x119b84: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x119b84u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)8u)));
    // 0x119b88: 0x37a7000c  ori         $a3, $sp, 0xC
    ctx->pc = 0x119b88u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 29), _mm_cvtsi32_si128((int)12u)));
    // 0x119b8c: 0xc046720  jal         func_119C80
    ctx->pc = 0x119B8Cu;
    SET_GPR_U32(ctx, 31, 0x119B94u);
    ctx->pc = 0x119B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119B8Cu;
            // 0x119b90: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119C80u;
    if (runtime->hasFunction(0x119C80u)) {
        auto targetFn = runtime->lookupFunction(0x119C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B94u; }
        if (ctx->pc != 0x119B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iopGetArea_0x119c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B94u; }
        if (ctx->pc != 0x119B94u) { return; }
    }
    ctx->pc = 0x119B94u;
    // 0x119b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x119B94u;
    {
        const bool branch_taken_0x119b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B94u;
            // 0x119b98: 0x8e070038  lw          $a3, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b94) {
            ctx->pc = 0x119BA0u;
            goto label_119ba0;
        }
    }
    ctx->pc = 0x119B9Cu;
label_119b9c:
    // 0x119b9c: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_119ba0:
    // 0x119ba0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x119ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119ba4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x119ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x119ba8: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x119ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x119bac: 0x87202a  slt         $a0, $a0, $a3
    ctx->pc = 0x119bacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x119bb0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x119bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x119bb4: 0x24e303ff  addiu       $v1, $a3, 0x3FF
    ctx->pc = 0x119bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1023));
    // 0x119bb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119bbc: 0xe4180b  movn        $v1, $a3, $a0
    ctx->pc = 0x119bbcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x119bc0: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x119bc0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119bc4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119BC4u;
    {
        const bool branch_taken_0x119bc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x119bc4) {
            ctx->pc = 0x119BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119BC4u;
            // 0x119bc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119BCCu;
            goto label_119bcc;
        }
    }
    ctx->pc = 0x119BCCu;
label_119bcc:
    // 0x119bcc: 0x31a83  sra         $v1, $v1, 10
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 10));
    // 0x119bd0: 0x8fac0004  lw          $t4, 0x4($sp)
    ctx->pc = 0x119bd0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x119bd4: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x119bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x119bd8: 0x8fad000c  lw          $t5, 0xC($sp)
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x119bdc: 0x8e0a0030  lw          $t2, 0x30($s0)
    ctx->pc = 0x119bdcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x119be0: 0x18d2021  addu        $a0, $t4, $t5
    ctx->pc = 0x119be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x119be4: 0x28840400  slti        $a0, $a0, 0x400
    ctx->pc = 0x119be4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x119be8: 0x3010  mfhi        $a2
    ctx->pc = 0x119be8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x119bec: 0xa64823  subu        $t1, $a1, $a2
    ctx->pc = 0x119becu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x119bf0: 0x1464021  addu        $t0, $t2, $a2
    ctx->pc = 0x119bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x119bf4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x119bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x119bf8: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x119bf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x119bfc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x119BFCu;
    {
        const bool branch_taken_0x119bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x119C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119BFCu;
            // 0x119c00: 0x695823  subu        $t3, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119bfc) {
            ctx->pc = 0x119C30u;
            goto label_119c30;
        }
    }
    ctx->pc = 0x119C04u;
    // 0x119c04: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x119c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x119c08: 0x28420400  slti        $v0, $v0, 0x400
    ctx->pc = 0x119c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x119c0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x119C0Cu;
    {
        const bool branch_taken_0x119c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119c0c) {
            ctx->pc = 0x119C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119C0Cu;
            // 0x119c10: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119C34u;
            goto label_119c34;
        }
    }
    ctx->pc = 0x119C14u;
    // 0x119c14: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x119c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119c18: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x119c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x119c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119c20: 0xc04674a  jal         func_119D28
    ctx->pc = 0x119C20u;
    SET_GPR_U32(ctx, 31, 0x119C28u);
    ctx->pc = 0x119C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C20u;
            // 0x119c24: 0x1a0382d  daddu       $a3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119D28u;
    if (runtime->hasFunction(0x119D28u)) {
        auto targetFn = runtime->lookupFunction(0x119D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C28u; }
        if (ctx->pc != 0x119C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP2area_0x119d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C28u; }
        if (ctx->pc != 0x119C28u) { return; }
    }
    ctx->pc = 0x119C28u;
    // 0x119c28: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x119c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x119c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119c30:
    // 0x119c30: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x119c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_119c34:
    // 0x119c34: 0xf13823  subu        $a3, $a3, $s1
    ctx->pc = 0x119c34u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x119c38: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x119c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x119c3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c40: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x119c44: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x119c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x119c48: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x119c48u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119c4c: 0xae070038  sw          $a3, 0x38($s0)
    ctx->pc = 0x119c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 7));
    // 0x119c50: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x119c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119c54: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x119c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x119c58: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119C58u;
    {
        const bool branch_taken_0x119c58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x119c58) {
            ctx->pc = 0x119C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119C58u;
            // 0x119c5c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119C60u;
            goto label_119c60;
        }
    }
    ctx->pc = 0x119C60u;
label_119c60:
    // 0x119c60: 0x3010  mfhi        $a2
    ctx->pc = 0x119c60u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x119c64: 0xae06004c  sw          $a2, 0x4C($s0)
    ctx->pc = 0x119c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 6));
label_119c68:
    // 0x119c68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119c6c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119c70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c74: 0x3e00008  jr          $ra
    ctx->pc = 0x119C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119C74u;
            // 0x119c78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119B08u: goto label_119b08;
            case 0x119B20u: goto label_119b20;
            case 0x119B30u: goto label_119b30;
            case 0x119B58u: goto label_119b58;
            case 0x119B9Cu: goto label_119b9c;
            case 0x119BA0u: goto label_119ba0;
            case 0x119BCCu: goto label_119bcc;
            case 0x119C30u: goto label_119c30;
            case 0x119C34u: goto label_119c34;
            case 0x119C60u: goto label_119c60;
            case 0x119C68u: goto label_119c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119C7Cu;
}
