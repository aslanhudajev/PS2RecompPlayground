#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: bulletproof_printf
// Address: 0x2a5818 - 0x2a5ae4
void bulletproof_printf_0x2a5818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5818u;

    // 0x2a5818: 0x27bddf40
    ctx->pc = 0x2a5818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294958912));
    // 0x2a581c: 0xffbf20b0
    ctx->pc = 0x2a581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8368), GPR_U64(ctx, 31));
    // 0x2a5820: 0xffb420a0
    ctx->pc = 0x2a5820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8352), GPR_U64(ctx, 20));
    // 0x2a5824: 0xffb32090
    ctx->pc = 0x2a5824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8336), GPR_U64(ctx, 19));
    // 0x2a5828: 0xffb22080
    ctx->pc = 0x2a5828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8320), GPR_U64(ctx, 18));
    // 0x2a582c: 0xffb12070
    ctx->pc = 0x2a582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8304), GPR_U64(ctx, 17));
    // 0x2a5830: 0xffb02060
    ctx->pc = 0x2a5830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8288), GPR_U64(ctx, 16));
    // 0x2a5834: 0xc0b80ba
    ctx->pc = 0x2A5834u;
    SET_GPR_U32(ctx, 31, 0x2A583Cu);
    ctx->pc = 0x2A5838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E02E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x2e02e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A583Cu; }
    }
    if (ctx->pc != 0x2A583Cu) { return; }
    ctx->pc = 0x2A583Cu;
    // 0x2a583c: 0x202d
    ctx->pc = 0x2a583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5840: 0x282d
    ctx->pc = 0x2a5840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5844: 0x24060002
    ctx->pc = 0x2a5844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5848: 0xc0b8072
    ctx->pc = 0x2A5848u;
    SET_GPR_U32(ctx, 31, 0x2A5850u);
    ctx->pc = 0x2A584Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2E01C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetGraph_0x2e01c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5850u; }
    }
    if (ctx->pc != 0x2A5850u) { return; }
    ctx->pc = 0x2A5850u;
    // 0x2a5850: 0xc0a95cc
    ctx->pc = 0x2A5850u;
    SET_GPR_U32(ctx, 31, 0x2A5858u);
    ctx->pc = 0x2A5854u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    ctx->pc = 0x2A5730u;
    {
        const uint32_t __entryPc = ctx->pc;
        fb_all_clear_0x2a5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5858u; }
    }
    if (ctx->pc != 0x2A5858u) { return; }
    ctx->pc = 0x2A5858u;
    // 0x2a5858: 0x3c030037
    ctx->pc = 0x2a5858u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a585c: 0x3c020037
    ctx->pc = 0x2a585cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a5860: 0x8c478354
    ctx->pc = 0x2a5860u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294935380)));
    // 0x2a5864: 0x717c2
    ctx->pc = 0x2a5864u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 31));
    // 0x2a5868: 0xe23821
    ctx->pc = 0x2a5868u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a586c: 0x73bc0
    ctx->pc = 0x2a586cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 15));
    // 0x2a5870: 0x260447c0
    ctx->pc = 0x2a5870u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 18368));
    // 0x2a5874: 0x282d
    ctx->pc = 0x2a5874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5878: 0x84668350
    ctx->pc = 0x2a5878u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294935376)));
    // 0x2a587c: 0x73c03
    ctx->pc = 0x2a587cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a5880: 0x402d
    ctx->pc = 0x2a5880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5884: 0xc0b80d4
    ctx->pc = 0x2A5884u;
    SET_GPR_U32(ctx, 31, 0x2A588Cu);
    ctx->pc = 0x2A5888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0350u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefDispEnv_0x2e0350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A588Cu; }
    }
    if (ctx->pc != 0x2A588Cu) { return; }
    ctx->pc = 0x2A588Cu;
    // 0x2a588c: 0x261047c0
    ctx->pc = 0x2a588cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18368));
    // 0x2a5890: 0x3c020037
    ctx->pc = 0x2a5890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a5894: 0x8c438008
    ctx->pc = 0x2a5894u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294934536)));
    // 0x2a5898: 0x31442
    ctx->pc = 0x2a5898u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 17));
    // 0x2a589c: 0x3042007f
    ctx->pc = 0x2a589cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 127));
    // 0x2a58a0: 0xa2020020
    ctx->pc = 0x2a58a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a58a4: 0x31242
    ctx->pc = 0x2a58a4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 9));
    // 0x2a58a8: 0x3042007f
    ctx->pc = 0x2a58a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 127));
    // 0x2a58ac: 0xa2020021
    ctx->pc = 0x2a58acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a58b0: 0x31842
    ctx->pc = 0x2a58b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2a58b4: 0x3063007f
    ctx->pc = 0x2a58b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 127));
    // 0x2a58b8: 0xa2030022
    ctx->pc = 0x2a58b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a58bc: 0xde020010
    ctx->pc = 0x2a58bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a58c0: 0x2403fe00
    ctx->pc = 0x2a58c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x2a58c4: 0x431024
    ctx->pc = 0x2a58c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a58c8: 0xfe020010
    ctx->pc = 0x2a58c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x2a58cc: 0xc0c0e18
    ctx->pc = 0x2A58CCu;
    SET_GPR_U32(ctx, 31, 0x2A58D4u);
    ctx->pc = 0x2A58D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58D4u; }
    }
    if (ctx->pc != 0x2A58D4u) { return; }
    ctx->pc = 0x2A58D4u;
    // 0x2a58d4: 0x3c10003c
    ctx->pc = 0x2a58d4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2a58d8: 0xc0b8170
    ctx->pc = 0x2A58D8u;
    SET_GPR_U32(ctx, 31, 0x2A58E0u);
    ctx->pc = 0x2A58DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 18368));
    ctx->pc = 0x2E05C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDispEnv_0x2e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58E0u; }
    }
    if (ctx->pc != 0x2A58E0u) { return; }
    ctx->pc = 0x2A58E0u;
    // 0x2a58e0: 0xc0b80ba
    ctx->pc = 0x2A58E0u;
    SET_GPR_U32(ctx, 31, 0x2A58E8u);
    ctx->pc = 0x2A58E4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x2E02E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsResetPath_0x2e02e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58E8u; }
    }
    if (ctx->pc != 0x2A58E8u) { return; }
    ctx->pc = 0x2A58E8u;
    // 0x2a58e8: 0xc0b8170
    ctx->pc = 0x2A58E8u;
    SET_GPR_U32(ctx, 31, 0x2A58F0u);
    ctx->pc = 0x2A58ECu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 18368));
    ctx->pc = 0x2E05C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsPutDispEnv_0x2e05c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58F0u; }
    }
    if (ctx->pc != 0x2A58F0u) { return; }
    ctx->pc = 0x2A58F0u;
    // 0x2a58f0: 0xc0a95cc
    ctx->pc = 0x2A58F0u;
    SET_GPR_U32(ctx, 31, 0x2A58F8u);
    ctx->pc = 0x2A5730u;
    {
        const uint32_t __entryPc = ctx->pc;
        fb_all_clear_0x2a5730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A58F8u; }
    }
    if (ctx->pc != 0x2A58F8u) { return; }
    ctx->pc = 0x2A58F8u;
    // 0x2a58f8: 0x82220000
    ctx->pc = 0x2a58f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a58fc: 0x10400068
    ctx->pc = 0x2A58FCu;
    {
        const bool branch_taken_0x2a58fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5900u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2a58fc) {
            ctx->pc = 0x2A5AA0u;
            goto label_2a5aa0;
        }
    }
    ctx->pc = 0x2A5904u;
    // 0x2a5904: 0x27b20060
    ctx->pc = 0x2a5904u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 96));
label_2a5908:
    // 0x2a5908: 0x602d
    ctx->pc = 0x2a5908u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a590c: 0x182d
    ctx->pc = 0x2a590cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5910:
    // 0x2a5910: 0x31080
    ctx->pc = 0x2a5910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a5914: 0x2421021
    ctx->pc = 0x2a5914u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a5918: 0xac400000
    ctx->pc = 0x2a5918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a591c: 0x24630001
    ctx->pc = 0x2a591cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a5920: 0x28620800
    ctx->pc = 0x2a5920u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2048));
    // 0x2a5924: 0x1440fffa
    ctx->pc = 0x2A5924u;
    {
        const bool branch_taken_0x2a5924 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5924) {
            ctx->pc = 0x2A5910u;
            goto label_2a5910;
        }
    }
    ctx->pc = 0x2A592Cu;
    // 0x2a592c: 0x82220000
    ctx->pc = 0x2a592cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5930: 0x10400043
    ctx->pc = 0x2A5930u;
    {
        const bool branch_taken_0x2a5930 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5934u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 21));
        if (branch_taken_0x2a5930) {
            ctx->pc = 0x2A5A40u;
            goto label_2a5a40;
        }
    }
    ctx->pc = 0x2A5938u;
    // 0x2a5938: 0x10400041
    ctx->pc = 0x2A5938u;
    {
        const bool branch_taken_0x2a5938 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A593Cu;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2a5938) {
            ctx->pc = 0x2A5A40u;
            goto label_2a5a40;
        }
    }
    ctx->pc = 0x2A5940u;
    // 0x2a5940: 0x24180028
    ctx->pc = 0x2a5940u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 40));
    // 0x2a5944: 0x24100029
    ctx->pc = 0x2a5944u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 41));
    // 0x2a5948: 0x240f002e
    ctx->pc = 0x2a5948u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 46));
    // 0x2a594c: 0x240e0020
    ctx->pc = 0x2a594cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a5950: 0x240d0023
    ctx->pc = 0x2a5950u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 35));
    // 0x2a5954: 0x3c020035
    ctx->pc = 0x2a5954u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2a5958: 0x24541580
    ctx->pc = 0x2a5958u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 5504));
    // 0x2a595c: 0x82230000
    ctx->pc = 0x2a595cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5960:
    // 0x2a5960: 0x2462ff9f
    ctx->pc = 0x2a5960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x2a5964: 0x2c42001a
    ctx->pc = 0x2a5964u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 26));
    // 0x2a5968: 0x10400003
    ctx->pc = 0x2A5968u;
    {
        const bool branch_taken_0x2a5968 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A596Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967264));
        if (branch_taken_0x2a5968) {
            ctx->pc = 0x2A5978u;
            goto label_2a5978;
        }
    }
    ctx->pc = 0x2A5970u;
    // 0x2a5970: 0x21600
    ctx->pc = 0x2a5970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x2a5974: 0x21e03
    ctx->pc = 0x2a5974u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_2a5978:
    // 0x2a5978: 0x3862005c
    ctx->pc = 0x2a5978u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 92));
    // 0x2a597c: 0x322180a
    ctx->pc = 0x2a597cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 25));
    // 0x2a5980: 0x3862005b
    ctx->pc = 0x2a5980u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 91));
    // 0x2a5984: 0x302180a
    ctx->pc = 0x2a5984u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 24));
    // 0x2a5988: 0x3862005d
    ctx->pc = 0x2a5988u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 93));
    // 0x2a598c: 0x202180a
    ctx->pc = 0x2a598cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 16));
    // 0x2a5990: 0x2462ffdf
    ctx->pc = 0x2a5990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967263));
    // 0x2a5994: 0x304200ff
    ctx->pc = 0x2a5994u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2a5998: 0x2c42003a
    ctx->pc = 0x2a5998u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 58));
    // 0x2a599c: 0x1e2180a
    ctx->pc = 0x2a599cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 15));
    // 0x2a59a0: 0x106e0020
    ctx->pc = 0x2A59A0u;
    {
        const bool branch_taken_0x2a59a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 14));
        ctx->pc = 0x2A59A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967263));
        if (branch_taken_0x2a59a0) {
            ctx->pc = 0x2A5A24u;
            goto label_2a5a24;
        }
    }
    ctx->pc = 0x2A59A8u;
    // 0x2a59a8: 0x4d1818
    ctx->pc = 0x2a59a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a59ac: 0x742021
    ctx->pc = 0x2a59acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2a59b0: 0x402d
    ctx->pc = 0x2a59b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a59b4: 0x2402000c
    ctx->pc = 0x2a59b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a59b8: 0x1824818
    ctx->pc = 0x2a59b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2a59bc: 0x27a60060
    ctx->pc = 0x2a59bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a59c0: 0x3c0b00ff
    ctx->pc = 0x2a59c0u;
    SET_GPR_U32(ctx, 11, ((uint32_t)255 << 16));
    // 0x2a59c4: 0x356bffff
    ctx->pc = 0x2a59c4u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 65535));
    // 0x2a59c8: 0x252a0001
    ctx->pc = 0x2a59c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 9), 1));
    // 0x2a59cc: 0x282d
    ctx->pc = 0x2a59ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a59d0:
    // 0x2a59d0: 0x83a00
    ctx->pc = 0x2a59d0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 8), 8));
    // 0x2a59d4: 0x0
    ctx->pc = 0x2a59d4u;
    // NOP
label_2a59d8:
    // 0x2a59d8: 0x80820000
    ctx->pc = 0x2a59d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a59dc: 0x10400009
    ctx->pc = 0x2A59DCu;
    {
        const bool branch_taken_0x2a59dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A59E0u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        if (branch_taken_0x2a59dc) {
            ctx->pc = 0x2A5A04u;
            goto label_2a5a04;
        }
    }
    ctx->pc = 0x2A59E4u;
    // 0x2a59e4: 0x1231021
    ctx->pc = 0x2a59e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2a59e8: 0x21080
    ctx->pc = 0x2a59e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a59ec: 0xc21021
    ctx->pc = 0x2a59ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a59f0: 0xac4b0000
    ctx->pc = 0x2a59f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x2a59f4: 0x1431821
    ctx->pc = 0x2a59f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2a59f8: 0x31880
    ctx->pc = 0x2a59f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a59fc: 0xc31821
    ctx->pc = 0x2a59fcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a5a00: 0xac6b0000
    ctx->pc = 0x2a5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
label_2a5a04:
    // 0x2a5a04: 0x24a50002
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2a5a08: 0x28a2000a
    ctx->pc = 0x2a5a08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x2a5a0c: 0x1440fff2
    ctx->pc = 0x2A5A0Cu;
    {
        const bool branch_taken_0x2a5a0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A5A10u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2a5a0c) {
            ctx->pc = 0x2A59D8u;
            goto label_2a59d8;
        }
    }
    ctx->pc = 0x2A5A14u;
    // 0x2a5a14: 0x25080001
    ctx->pc = 0x2a5a14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a5a18: 0x29020007
    ctx->pc = 0x2a5a18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 8), 7));
    // 0x2a5a1c: 0x5440ffec
    ctx->pc = 0x2A5A1Cu;
    {
        const bool branch_taken_0x2a5a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5a1c) {
            ctx->pc = 0x2A5A20u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2A59D0u;
            goto label_2a59d0;
        }
    }
    ctx->pc = 0x2A5A24u;
label_2a5a24:
    // 0x2a5a24: 0x26310001
    ctx->pc = 0x2a5a24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2a5a28: 0x82220000
    ctx->pc = 0x2a5a28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5a2c: 0x10400004
    ctx->pc = 0x2A5A2Cu;
    {
        const bool branch_taken_0x2a5a2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5A30u;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 1));
        if (branch_taken_0x2a5a2c) {
            ctx->pc = 0x2A5A40u;
            goto label_2a5a40;
        }
    }
    ctx->pc = 0x2A5A34u;
    // 0x2a5a34: 0x29820015
    ctx->pc = 0x2a5a34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 21));
    // 0x2a5a38: 0x5440ffc9
    ctx->pc = 0x2A5A38u;
    {
        const bool branch_taken_0x2a5a38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a5a38) {
            ctx->pc = 0x2A5A3Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2A5960u;
            goto label_2a5960;
        }
    }
    ctx->pc = 0x2A5A40u;
label_2a5a40:
    // 0x2a5a40: 0x134c00
    ctx->pc = 0x2a5a40u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 19), 16));
    // 0x2a5a44: 0x3a0202d
    ctx->pc = 0x2a5a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a48: 0x282d
    ctx->pc = 0x2a5a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a4c: 0x2406000a
    ctx->pc = 0x2a5a4cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a5a50: 0x382d
    ctx->pc = 0x2a5a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a54: 0x24080032
    ctx->pc = 0x2a5a54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 50));
    // 0x2a5a58: 0x94c03
    ctx->pc = 0x2a5a58u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2a5a5c: 0x240a0100
    ctx->pc = 0x2a5a5cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a5a60: 0xc0b83fe
    ctx->pc = 0x2A5A60u;
    SET_GPR_U32(ctx, 31, 0x2A5A68u);
    ctx->pc = 0x2A5A64u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2E0FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSetDefLoadImage_0x2e0ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A68u; }
    }
    if (ctx->pc != 0x2A5A68u) { return; }
    ctx->pc = 0x2A5A68u;
    // 0x2a5a68: 0xc0c0e18
    ctx->pc = 0x2A5A68u;
    SET_GPR_U32(ctx, 31, 0x2A5A70u);
    ctx->pc = 0x2A5A6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A70u; }
    }
    if (ctx->pc != 0x2A5A70u) { return; }
    ctx->pc = 0x2A5A70u;
    // 0x2a5a70: 0x3a0202d
    ctx->pc = 0x2a5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a74: 0xc0b8478
    ctx->pc = 0x2A5A74u;
    SET_GPR_U32(ctx, 31, 0x2A5A7Cu);
    ctx->pc = 0x2A5A78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x2E11E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsExecLoadImage_0x2e11e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A7Cu; }
    }
    if (ctx->pc != 0x2A5A7Cu) { return; }
    ctx->pc = 0x2A5A7Cu;
    // 0x2a5a7c: 0x202d
    ctx->pc = 0x2a5a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a80: 0x282d
    ctx->pc = 0x2a5a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5a84: 0x3c06003b
    ctx->pc = 0x2a5a84u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2a5a88: 0xc0aa02e
    ctx->pc = 0x2A5A88u;
    SET_GPR_U32(ctx, 31, 0x2A5A90u);
    ctx->pc = 0x2A5A8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294961968));
    ctx->pc = 0x2A80B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGsSyncPath_0x2a80b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5A90u; }
    }
    if (ctx->pc != 0x2A5A90u) { return; }
    ctx->pc = 0x2A5A90u;
    // 0x2a5a90: 0x82220000
    ctx->pc = 0x2a5a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a5a94: 0x1440ff9c
    ctx->pc = 0x2A5A94u;
    {
        const bool branch_taken_0x2a5a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A5A98u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
        if (branch_taken_0x2a5a94) {
            ctx->pc = 0x2A5908u;
            goto label_2a5908;
        }
    }
    ctx->pc = 0x2A5A9Cu;
    // 0x2a5a9c: 0x3c02003c
    ctx->pc = 0x2a5a9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2a5aa0:
    // 0x2a5aa0: 0x244247c0
    ctx->pc = 0x2a5aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18368));
    // 0x2a5aa4: 0x90430022
    ctx->pc = 0x2a5aa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2a5aa8: 0xa0430022
    ctx->pc = 0x2a5aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5aac: 0x802d
    ctx->pc = 0x2a5aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5ab0:
    // 0x2a5ab0: 0xc0b8312
    ctx->pc = 0x2A5AB0u;
    SET_GPR_U32(ctx, 31, 0x2A5AB8u);
    ctx->pc = 0x2A5AB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x2e0c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5AB8u; }
    }
    if (ctx->pc != 0x2A5AB8u) { return; }
    ctx->pc = 0x2A5AB8u;
    // 0x2a5ab8: 0x26100001
    ctx->pc = 0x2a5ab8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a5abc: 0x2a02001e
    ctx->pc = 0x2a5abcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 30));
    // 0x2a5ac0: 0x1440fffb
    ctx->pc = 0x2A5AC0u;
    {
        const bool branch_taken_0x2a5ac0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A5AC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8368)));
        if (branch_taken_0x2a5ac0) {
            ctx->pc = 0x2A5AB0u;
            goto label_2a5ab0;
        }
    }
    ctx->pc = 0x2A5AC8u;
    // 0x2a5ac8: 0xdfb420a0
    ctx->pc = 0x2a5ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 8352)));
    // 0x2a5acc: 0xdfb32090
    ctx->pc = 0x2a5accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 8336)));
    // 0x2a5ad0: 0xdfb22080
    ctx->pc = 0x2a5ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 8320)));
    // 0x2a5ad4: 0xdfb12070
    ctx->pc = 0x2a5ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8304)));
    // 0x2a5ad8: 0xdfb02060
    ctx->pc = 0x2a5ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 8288)));
    // 0x2a5adc: 0x3e00008
    ctx->pc = 0x2A5ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 8384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5908u: goto label_2a5908;
            case 0x2A5910u: goto label_2a5910;
            case 0x2A5960u: goto label_2a5960;
            case 0x2A5978u: goto label_2a5978;
            case 0x2A59D0u: goto label_2a59d0;
            case 0x2A59D8u: goto label_2a59d8;
            case 0x2A5A04u: goto label_2a5a04;
            case 0x2A5A24u: goto label_2a5a24;
            case 0x2A5A40u: goto label_2a5a40;
            case 0x2A5AA0u: goto label_2a5aa0;
            case 0x2A5AB0u: goto label_2a5ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5AE4u;
}
