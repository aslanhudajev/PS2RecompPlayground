#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetReverb
// Address: 0x10b038 - 0x10b1b4
void SetReverb_0x10b038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10b038u;

    // 0x10b038: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10b038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10b03c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x10b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x10b040: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x10b040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x10b044: 0x3c160017  lui         $s6, 0x17
    ctx->pc = 0x10b044u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)23 << 16));
    // 0x10b048: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10b048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x10b04c: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x10b04cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x10b050: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x10b054: 0x3c140017  lui         $s4, 0x17
    ctx->pc = 0x10b054u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)23 << 16));
    // 0x10b058: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10b058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10b05c: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x10b05cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x10b060: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10b060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10b064: 0x3c120017  lui         $s2, 0x17
    ctx->pc = 0x10b064u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)23 << 16));
    // 0x10b068: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b06c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10b06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b070: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10b070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10b074: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x10b074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b078: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x10b078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10b07c: 0x0  nop
    ctx->pc = 0x10b07cu;
    // NOP
label_10b080:
    // 0x10b080: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x10b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x10b084: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x10b084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x10b088: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10b088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10b08c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x10b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x10b090: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b094: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10b094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10b098: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x10b098u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)33072u)));
    // 0x10b09c: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x10b09cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b0a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10b0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b0a4: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x10b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b0a8: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B0A8u;
    SET_GPR_U32(ctx, 31, 0x10B0B0u);
    ctx->pc = 0x10B0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0A8u;
            // 0x10b0ac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0B0u; }
        if (ctx->pc != 0x10B0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0B0u; }
        if (ctx->pc != 0x10B0B0u) { return; }
    }
    ctx->pc = 0x10B0B0u;
    // 0x10b0b0: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B0B0u;
    {
        const bool branch_taken_0x10b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0B0u;
            // 0x10b0b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0b0) {
            ctx->pc = 0x10B0C4u;
            goto label_10b0c4;
        }
    }
    ctx->pc = 0x10B0B8u;
    // 0x10b0b8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B0B8u;
    SET_GPR_U32(ctx, 31, 0x10B0C0u);
    ctx->pc = 0x10B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0B8u;
            // 0x10b0bc: 0x264437f0  addiu       $a0, $s2, 0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0C0u; }
        if (ctx->pc != 0x10B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0C0u; }
        if (ctx->pc != 0x10B0C0u) { return; }
    }
    ctx->pc = 0x10B0C0u;
    // 0x10b0c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b0c4:
    // 0x10b0c4: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x10b0c4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32880u)));
    // 0x10b0c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b0cc: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B0CCu;
    SET_GPR_U32(ctx, 31, 0x10B0D4u);
    ctx->pc = 0x10B0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0CCu;
            // 0x10b0d0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0D4u; }
        if (ctx->pc != 0x10B0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0D4u; }
        if (ctx->pc != 0x10B0D4u) { return; }
    }
    ctx->pc = 0x10B0D4u;
    // 0x10b0d4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B0D4u;
    {
        const bool branch_taken_0x10b0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0D4u;
            // 0x10b0d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0d4) {
            ctx->pc = 0x10B0E8u;
            goto label_10b0e8;
        }
    }
    ctx->pc = 0x10B0DCu;
    // 0x10b0dc: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B0DCu;
    SET_GPR_U32(ctx, 31, 0x10B0E4u);
    ctx->pc = 0x10B0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0DCu;
            // 0x10b0e0: 0x264437f0  addiu       $a0, $s2, 0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 14320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0E4u; }
        if (ctx->pc != 0x10B0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0E4u; }
        if (ctx->pc != 0x10B0E4u) { return; }
    }
    ctx->pc = 0x10B0E4u;
    // 0x10b0e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b0e8:
    // 0x10b0e8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b0e8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b0ec: 0x24060b80  addiu       $a2, $zero, 0xB80
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2944));
    // 0x10b0f0: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B0F0u;
    SET_GPR_U32(ctx, 31, 0x10B0F8u);
    ctx->pc = 0x10B0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0F0u;
            // 0x10b0f4: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0F8u; }
        if (ctx->pc != 0x10B0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B0F8u; }
        if (ctx->pc != 0x10B0F8u) { return; }
    }
    ctx->pc = 0x10B0F8u;
    // 0x10b0f8: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B0F8u;
    {
        const bool branch_taken_0x10b0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x10B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B0F8u;
            // 0x10b0fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b0f8) {
            ctx->pc = 0x10B10Cu;
            goto label_10b10c;
        }
    }
    ctx->pc = 0x10B100u;
    // 0x10b100: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B100u;
    SET_GPR_U32(ctx, 31, 0x10B108u);
    ctx->pc = 0x10B104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B100u;
            // 0x10b104: 0x26c43808  addiu       $a0, $s6, 0x3808 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 14344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B108u; }
        if (ctx->pc != 0x10B108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B108u; }
        if (ctx->pc != 0x10B108u) { return; }
    }
    ctx->pc = 0x10B108u;
    // 0x10b108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b10c:
    // 0x10b10c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10b10cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10b110: 0x24060c80  addiu       $a2, $zero, 0xC80
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    // 0x10b114: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B114u;
    SET_GPR_U32(ctx, 31, 0x10B11Cu);
    ctx->pc = 0x10B118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B114u;
            // 0x10b118: 0x24073fff  addiu       $a3, $zero, 0x3FFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B11Cu; }
        if (ctx->pc != 0x10B11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B11Cu; }
        if (ctx->pc != 0x10B11Cu) { return; }
    }
    ctx->pc = 0x10B11Cu;
    // 0x10b11c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B11Cu;
    {
        const bool branch_taken_0x10b11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b11c) {
            ctx->pc = 0x10B120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B11Cu;
            // 0x10b120: 0x3c0700ff  lui         $a3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B130u;
            goto label_10b130;
        }
    }
    ctx->pc = 0x10B124u;
    // 0x10b124: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B124u;
    SET_GPR_U32(ctx, 31, 0x10B12Cu);
    ctx->pc = 0x10B128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B124u;
            // 0x10b128: 0x26a43820  addiu       $a0, $s5, 0x3820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 14368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B12Cu; }
        if (ctx->pc != 0x10B12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B12Cu; }
        if (ctx->pc != 0x10B12Cu) { return; }
    }
    ctx->pc = 0x10B12Cu;
    // 0x10b12c: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x10b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
label_10b130:
    // 0x10b130: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b134: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x10b134u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
    // 0x10b138: 0x24061900  addiu       $a2, $zero, 0x1900
    ctx->pc = 0x10b138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
    // 0x10b13c: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B13Cu;
    SET_GPR_U32(ctx, 31, 0x10B144u);
    ctx->pc = 0x10B140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B13Cu;
            // 0x10b140: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B144u; }
        if (ctx->pc != 0x10B144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B144u; }
        if (ctx->pc != 0x10B144u) { return; }
    }
    ctx->pc = 0x10B144u;
    // 0x10b144: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B144u;
    {
        const bool branch_taken_0x10b144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b144) {
            ctx->pc = 0x10B148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B144u;
            // 0x10b148: 0x3c0700ff  lui         $a3, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B158u;
            goto label_10b158;
        }
    }
    ctx->pc = 0x10B14Cu;
    // 0x10b14c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B14Cu;
    SET_GPR_U32(ctx, 31, 0x10B154u);
    ctx->pc = 0x10B150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B14Cu;
            // 0x10b150: 0x26843838  addiu       $a0, $s4, 0x3838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 14392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B154u; }
        if (ctx->pc != 0x10B154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B154u; }
        if (ctx->pc != 0x10B154u) { return; }
    }
    ctx->pc = 0x10B154u;
    // 0x10b154: 0x3c0700ff  lui         $a3, 0xFF
    ctx->pc = 0x10b154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)255 << 16));
label_10b158:
    // 0x10b158: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b15c: 0x34058030  ori         $a1, $zero, 0x8030
    ctx->pc = 0x10b15cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32816u)));
    // 0x10b160: 0x24061b00  addiu       $a2, $zero, 0x1B00
    ctx->pc = 0x10b160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6912));
    // 0x10b164: 0xc045c80  jal         func_117200
    ctx->pc = 0x10B164u;
    SET_GPR_U32(ctx, 31, 0x10B16Cu);
    ctx->pc = 0x10B168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B164u;
            // 0x10b168: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B16Cu; }
        if (ctx->pc != 0x10B16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B16Cu; }
        if (ctx->pc != 0x10B16Cu) { return; }
    }
    ctx->pc = 0x10B16Cu;
    // 0x10b16c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10B16Cu;
    {
        const bool branch_taken_0x10b16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x10b16c) {
            ctx->pc = 0x10B170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10B16Cu;
            // 0x10b170: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10B180u;
            goto label_10b180;
        }
    }
    ctx->pc = 0x10B174u;
    // 0x10b174: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10B174u;
    SET_GPR_U32(ctx, 31, 0x10B17Cu);
    ctx->pc = 0x10B178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B174u;
            // 0x10b178: 0x26643850  addiu       $a0, $s3, 0x3850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 14416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B17Cu; }
        if (ctx->pc != 0x10B17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B17Cu; }
        if (ctx->pc != 0x10B17Cu) { return; }
    }
    ctx->pc = 0x10B17Cu;
    // 0x10b17c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10b17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10b180:
    // 0x10b180: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x10b180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10b184: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x10B184u;
    {
        const bool branch_taken_0x10b184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B184u;
            // 0x10b188: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b184) {
            ctx->pc = 0x10B080u;
            goto label_10b080;
        }
    }
    ctx->pc = 0x10B18Cu;
    // 0x10b18c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10b190: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x10b190u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10b194: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x10b194u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10b198: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10b198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b19c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10b19cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b1a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b1a4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b1a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x10B1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B1ACu;
            // 0x10b1b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10B080u: goto label_10b080;
            case 0x10B0C4u: goto label_10b0c4;
            case 0x10B0E8u: goto label_10b0e8;
            case 0x10B10Cu: goto label_10b10c;
            case 0x10B130u: goto label_10b130;
            case 0x10B158u: goto label_10b158;
            case 0x10B180u: goto label_10b180;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10B1B4u;
}
