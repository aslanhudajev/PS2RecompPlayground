#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: tryAnimate
// Address: 0x107888 - 0x107aa4
void tryAnimate_0x107888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("tryAnimate_0x107888");
#endif

    ctx->pc = 0x107888u;

    // 0x107888: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10788c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107890: 0x8f9182e8  lw          $s1, -0x7D18($gp)
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935272)));
    // 0x107894: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x107894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x107898: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x107898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10789c: 0x341e8000  ori         $fp, $zero, 0x8000
    ctx->pc = 0x10789cu;
    SET_GPR_VEC(ctx, 30, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x1078a0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1078a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1078a4: 0x2417000f  addiu       $s7, $zero, 0xF
    ctx->pc = 0x1078a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1078a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1078a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1078ac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1078b0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1078b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1078b4: 0x3222003f  andi        $v0, $s1, 0x3F
    ctx->pc = 0x1078b4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1078b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1078b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1078bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1078bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1078c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1078c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1078c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1078c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1078c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1078C8u;
    {
        const bool branch_taken_0x1078c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1078C8u;
            // 0x1078cc: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078c8) {
            ctx->pc = 0x1078DCu;
            goto label_1078dc;
        }
    }
    ctx->pc = 0x1078D0u;
    // 0x1078d0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1078d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1078d4: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1078D4u;
    SET_GPR_U32(ctx, 31, 0x1078DCu);
    ctx->pc = 0x1078D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1078D4u;
            // 0x1078d8: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078DCu; }
        if (ctx->pc != 0x1078DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1078DCu; }
        if (ctx->pc != 0x1078DCu) { return; }
    }
    ctx->pc = 0x1078DCu;
label_1078dc:
    // 0x1078dc: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1078dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x1078e0: 0x8f9282d8  lw          $s2, -0x7D28($gp)
    ctx->pc = 0x1078e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
    // 0x1078e4: 0x24501698  addiu       $s0, $v0, 0x1698
    ctx->pc = 0x1078e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x1078e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1078e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1078ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1078ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1078f0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1078f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1078f4: 0xae110550  sw          $s1, 0x550($s0)
    ctx->pc = 0x1078f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 17));
    // 0x1078f8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x1078f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x1078fc: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x1078fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x107900: 0x24022800  addiu       $v0, $zero, 0x2800
    ctx->pc = 0x107900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x107904: 0xae1e0560  sw          $fp, 0x560($s0)
    ctx->pc = 0x107904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 30));
    // 0x107908: 0xae020564  sw          $v0, 0x564($s0)
    ctx->pc = 0x107908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 2));
    // 0x10790c: 0x24157500  addiu       $s5, $zero, 0x7500
    ctx->pc = 0x10790cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 29952));
    // 0x107910: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x107910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x107914: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x107914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x107918: 0xae020568  sw          $v0, 0x568($s0)
    ctx->pc = 0x107918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 2));
    // 0x10791c: 0x3243003f  andi        $v1, $s2, 0x3F
    ctx->pc = 0x10791cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x107920: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x107924: 0xae1e055c  sw          $fp, 0x55C($s0)
    ctx->pc = 0x107924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 30));
    // 0x107928: 0xae020558  sw          $v0, 0x558($s0)
    ctx->pc = 0x107928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 2));
    // 0x10792c: 0xae16056c  sw          $s6, 0x56C($s0)
    ctx->pc = 0x10792cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 22));
    // 0x107930: 0xa2170578  sb          $s7, 0x578($s0)
    ctx->pc = 0x107930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1400), (uint8_t)GPR_U32(ctx, 23));
    // 0x107934: 0xe6140570  swc1        $f20, 0x570($s0)
    ctx->pc = 0x107934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1392), bits); }
    // 0x107938: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x107938u;
    {
        const bool branch_taken_0x107938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107938u;
            // 0x10793c: 0xe6140574  swc1        $f20, 0x574($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107938) {
            ctx->pc = 0x10794Cu;
            goto label_10794c;
        }
    }
    ctx->pc = 0x107940u;
    // 0x107940: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x107944: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x107944u;
    SET_GPR_U32(ctx, 31, 0x10794Cu);
    ctx->pc = 0x107948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107944u;
            // 0x107948: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10794Cu; }
        if (ctx->pc != 0x10794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10794Cu; }
        if (ctx->pc != 0x10794Cu) { return; }
    }
    ctx->pc = 0x10794Cu;
label_10794c:
    // 0x10794c: 0x8f9182dc  lw          $s1, -0x7D24($gp)
    ctx->pc = 0x10794cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935260)));
    // 0x107950: 0x24027600  addiu       $v0, $zero, 0x7600
    ctx->pc = 0x107950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30208));
    // 0x107954: 0xae120220  sw          $s2, 0x220($s0)
    ctx->pc = 0x107954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 18));
    // 0x107958: 0xae02022c  sw          $v0, 0x22C($s0)
    ctx->pc = 0x107958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 2));
    // 0x10795c: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x10795cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x107960: 0xae140224  sw          $s4, 0x224($s0)
    ctx->pc = 0x107960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 20));
    // 0x107964: 0xae140228  sw          $s4, 0x228($s0)
    ctx->pc = 0x107964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 20));
    // 0x107968: 0xae150230  sw          $s5, 0x230($s0)
    ctx->pc = 0x107968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 21));
    // 0x10796c: 0xae130234  sw          $s3, 0x234($s0)
    ctx->pc = 0x10796cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 19));
    // 0x107970: 0xae130238  sw          $s3, 0x238($s0)
    ctx->pc = 0x107970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 19));
    // 0x107974: 0xae16023c  sw          $s6, 0x23C($s0)
    ctx->pc = 0x107974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 22));
    // 0x107978: 0xa2170248  sb          $s7, 0x248($s0)
    ctx->pc = 0x107978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 584), (uint8_t)GPR_U32(ctx, 23));
    // 0x10797c: 0xe6140240  swc1        $f20, 0x240($s0)
    ctx->pc = 0x10797cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x107980: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x107980u;
    {
        const bool branch_taken_0x107980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107980u;
            // 0x107984: 0xe6140244  swc1        $f20, 0x244($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107980) {
            ctx->pc = 0x107994u;
            goto label_107994;
        }
    }
    ctx->pc = 0x107988u;
    // 0x107988: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x107988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10798c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10798Cu;
    SET_GPR_U32(ctx, 31, 0x107994u);
    ctx->pc = 0x107990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10798Cu;
            // 0x107990: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107994u; }
        if (ctx->pc != 0x107994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107994u; }
        if (ctx->pc != 0x107994u) { return; }
    }
    ctx->pc = 0x107994u;
label_107994:
    // 0x107994: 0x8f9282e4  lw          $s2, -0x7D1C($gp)
    ctx->pc = 0x107994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    // 0x107998: 0x34028a00  ori         $v0, $zero, 0x8A00
    ctx->pc = 0x107998u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)35328u)));
    // 0x10799c: 0xae020380  sw          $v0, 0x380($s0)
    ctx->pc = 0x10799cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    // 0x1079a0: 0x241e0400  addiu       $fp, $zero, 0x400
    ctx->pc = 0x1079a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1079a4: 0xae110374  sw          $s1, 0x374($s0)
    ctx->pc = 0x1079a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 884), GPR_U32(ctx, 17));
    // 0x1079a8: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x1079a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)63u)));
    // 0x1079ac: 0xae14037c  sw          $s4, 0x37C($s0)
    ctx->pc = 0x1079acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 20));
    // 0x1079b0: 0xae13038c  sw          $s3, 0x38C($s0)
    ctx->pc = 0x1079b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 19));
    // 0x1079b4: 0xae140378  sw          $s4, 0x378($s0)
    ctx->pc = 0x1079b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 20));
    // 0x1079b8: 0xae150384  sw          $s5, 0x384($s0)
    ctx->pc = 0x1079b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 21));
    // 0x1079bc: 0xae130388  sw          $s3, 0x388($s0)
    ctx->pc = 0x1079bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 19));
    // 0x1079c0: 0xae160390  sw          $s6, 0x390($s0)
    ctx->pc = 0x1079c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 22));
    // 0x1079c4: 0xa217039c  sb          $s7, 0x39C($s0)
    ctx->pc = 0x1079c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 924), (uint8_t)GPR_U32(ctx, 23));
    // 0x1079c8: 0xe6140394  swc1        $f20, 0x394($s0)
    ctx->pc = 0x1079c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x1079cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1079CCu;
    {
        const bool branch_taken_0x1079cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1079CCu;
            // 0x1079d0: 0xe6140398  swc1        $f20, 0x398($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079cc) {
            ctx->pc = 0x1079E0u;
            goto label_1079e0;
        }
    }
    ctx->pc = 0x1079D4u;
    // 0x1079d4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1079d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1079d8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1079D8u;
    SET_GPR_U32(ctx, 31, 0x1079E0u);
    ctx->pc = 0x1079DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1079D8u;
            // 0x1079dc: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1079E0u; }
        if (ctx->pc != 0x1079E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1079E0u; }
        if (ctx->pc != 0x1079E0u) { return; }
    }
    ctx->pc = 0x1079E0u;
label_1079e0:
    // 0x1079e0: 0x8f9182d4  lw          $s1, -0x7D2C($gp)
    ctx->pc = 0x1079e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
    // 0x1079e4: 0x24027b00  addiu       $v0, $zero, 0x7B00
    ctx->pc = 0x1079e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31488));
    // 0x1079e8: 0xae0205a0  sw          $v0, 0x5A0($s0)
    ctx->pc = 0x1079e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
    // 0x1079ec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1079ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1079f0: 0xae120594  sw          $s2, 0x594($s0)
    ctx->pc = 0x1079f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 18));
    // 0x1079f4: 0xae020598  sw          $v0, 0x598($s0)
    ctx->pc = 0x1079f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 2));
    // 0x1079f8: 0x3223003f  andi        $v1, $s1, 0x3F
    ctx->pc = 0x1079f8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 17), _mm_cvtsi32_si128((int)63u)));
    // 0x1079fc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x107a00: 0xae1505a4  sw          $s5, 0x5A4($s0)
    ctx->pc = 0x107a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 21));
    // 0x107a04: 0xae02059c  sw          $v0, 0x59C($s0)
    ctx->pc = 0x107a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 2));
    // 0x107a08: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x107a0c: 0xae1e05ac  sw          $fp, 0x5AC($s0)
    ctx->pc = 0x107a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1452), GPR_U32(ctx, 30));
    // 0x107a10: 0xae0205a8  sw          $v0, 0x5A8($s0)
    ctx->pc = 0x107a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1448), GPR_U32(ctx, 2));
    // 0x107a14: 0xae1605b0  sw          $s6, 0x5B0($s0)
    ctx->pc = 0x107a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 22));
    // 0x107a18: 0xa21705bc  sb          $s7, 0x5BC($s0)
    ctx->pc = 0x107a18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1468), (uint8_t)GPR_U32(ctx, 23));
    // 0x107a1c: 0xe61405b4  swc1        $f20, 0x5B4($s0)
    ctx->pc = 0x107a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1460), bits); }
    // 0x107a20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A20u;
    {
        const bool branch_taken_0x107a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A20u;
            // 0x107a24: 0xe61405b8  swc1        $f20, 0x5B8($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a20) {
            ctx->pc = 0x107A34u;
            goto label_107a34;
        }
    }
    ctx->pc = 0x107A28u;
    // 0x107a28: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x107a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x107a2c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x107A2Cu;
    SET_GPR_U32(ctx, 31, 0x107A34u);
    ctx->pc = 0x107A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107A2Cu;
            // 0x107a30: 0x24842f78  addiu       $a0, $a0, 0x2F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A34u; }
        if (ctx->pc != 0x107A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107A34u; }
        if (ctx->pc != 0x107A34u) { return; }
    }
    ctx->pc = 0x107A34u;
label_107a34:
    // 0x107a34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x107a38: 0xe6140310  swc1        $f20, 0x310($s0)
    ctx->pc = 0x107a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x107a3c: 0xae0202f0  sw          $v0, 0x2F0($s0)
    ctx->pc = 0x107a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 2));
    // 0x107a40: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x107a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x107a44: 0xae1102ec  sw          $s1, 0x2EC($s0)
    ctx->pc = 0x107a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 17));
    // 0x107a48: 0xae0202f4  sw          $v0, 0x2F4($s0)
    ctx->pc = 0x107a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 2));
    // 0x107a4c: 0x34028500  ori         $v0, $zero, 0x8500
    ctx->pc = 0x107a4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34048u)));
    // 0x107a50: 0xae1502fc  sw          $s5, 0x2FC($s0)
    ctx->pc = 0x107a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 21));
    // 0x107a54: 0xae0202f8  sw          $v0, 0x2F8($s0)
    ctx->pc = 0x107a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 760), GPR_U32(ctx, 2));
    // 0x107a58: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x107a5c: 0xae1e0304  sw          $fp, 0x304($s0)
    ctx->pc = 0x107a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 30));
    // 0x107a60: 0xae160308  sw          $s6, 0x308($s0)
    ctx->pc = 0x107a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 22));
    // 0x107a64: 0xa2170314  sb          $s7, 0x314($s0)
    ctx->pc = 0x107a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 788), (uint8_t)GPR_U32(ctx, 23));
    // 0x107a68: 0xe614030c  swc1        $f20, 0x30C($s0)
    ctx->pc = 0x107a68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 780), bits); }
    // 0x107a6c: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x107a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    // 0x107a70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x107a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107a74: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x107a74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107a78: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x107a78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107a7c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x107a7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107a80: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x107a80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107a84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x107a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107a88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107a88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107a8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107a90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107a98: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x107a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x107a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x107A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A9Cu;
            // 0x107aa0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1078DCu: goto label_1078dc;
            case 0x10794Cu: goto label_10794c;
            case 0x107994u: goto label_107994;
            case 0x1079E0u: goto label_1079e0;
            case 0x107A34u: goto label_107a34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107AA4u;
}
